#include <stdint.h>
#include <math.h>

// ============================================================================
// HARDWARE DEFINITIONS
// ============================================================================

#define VGA_FRAMEBUFFER_BASE    0x08000000  // VGA Pixel Buffer

#define SCREEN_WIDTH            320
#define SCREEN_HEIGHT           240

// Render at lower resolution for speed
#define RENDER_WIDTH            320
#define RENDER_HEIGHT           240
#define SCALE_FACTOR            1

// Color definitions (RGB565)
#define COLOR_BLACK             0x0000
#define COLOR_WHITE             0xFFFF
#define COLOR_RED               0xF800
#define COLOR_GREEN             0x07E0
#define COLOR_BLUE              0x001F
#define COLOR_YELLOW            0xFFE0
#define COLOR_CYAN              0x07FF
#define COLOR_MAGENTA           0xF81F

// ============================================================================
// VECTOR MATH
// ============================================================================

typedef struct {
    float x, y, z;
} Vec3;

Vec3 vec3_new(float x, float y, float z) {
    Vec3 v = {x, y, z};
    return v;
}

Vec3 vec3_add(Vec3 a, Vec3 b) {
    return vec3_new(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vec3 vec3_sub(Vec3 a, Vec3 b) {
    return vec3_new(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vec3 vec3_mul(Vec3 a, float s) {
    return vec3_new(a.x * s, a.y * s, a.z * s);
}

float vec3_dot(Vec3 a, Vec3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

float vec3_length(Vec3 v) {
    return sqrtf(vec3_dot(v, v));
}

Vec3 vec3_normalize(Vec3 v) {
    float len = vec3_length(v);
    if (len > 0.0001f) {
        return vec3_mul(v, 1.0f / len);
    }
    return v;
}

Vec3 vec3_reflect(Vec3 v, Vec3 n) {
    return vec3_sub(v, vec3_mul(n, 2.0f * vec3_dot(v, n)));
}

Vec3 vec3_refract(Vec3 v, Vec3 n, float eta) {
    float k = 1.0f - eta * eta * (1.0f - vec3_dot(n, v) * vec3_dot(n, v));
    if (k < 0.0f) {
        return vec3_new(0, 0, 0); // Total internal reflection
    }
    return vec3_sub(vec3_mul(v, eta), vec3_mul(n, eta * vec3_dot(n, v) + sqrtf(k)));
}

float fresnel(Vec3 I, Vec3 N, float ior) {
    float cosi = vec3_dot(I, N);
    if (cosi < 0) cosi = -cosi;
    else cosi = fmaxf(-1.0f, fminf(1.0f, cosi));
    
    float etai = 1.0f, etat = ior;
    if (cosi > 0) { float temp = etai; etai = etat; etat = temp; }
    
    float sint = etai / etat * sqrtf(fmaxf(0.0f, 1.0f - cosi * cosi));
    
    if (sint >= 1.0f) return 1.0f; // Total internal reflection
    
    float cost = sqrtf(fmaxf(0.0f, 1.0f - sint * sint));
    cosi = fabsf(cosi);
    float Rs = ((etat * cosi) - (etai * cost)) / ((etat * cosi) + (etai * cost));
    float Rp = ((etai * cosi) - (etat * cost)) / ((etai * cosi) + (etat * cost));
    return (Rs * Rs + Rp * Rp) / 2.0f;
}

// ============================================================================
// SCENE OBJECTS
// ============================================================================

typedef struct {
    Vec3 center;
    float radius;
    Vec3 color;
    float reflectivity;
    float transparency;
    float refractiveIndex;
} Sphere;

typedef struct {
    Vec3 position;
    Vec3 color;
    float intensity;
} Light;

// Scene definition
#define MAX_SPHERES 10
#define MAX_LIGHTS 4
Sphere spheres[MAX_SPHERES];
int numSpheres = 0;

Light lights[MAX_LIGHTS];
int numLights = 0;

void add_sphere(float x, float y, float z, float r, float cr, float cg, float cb, float refl, float transp, float ior) {
    if (numSpheres < MAX_SPHERES) {
        spheres[numSpheres].center = vec3_new(x, y, z);
        spheres[numSpheres].radius = r;
        spheres[numSpheres].color = vec3_new(cr, cg, cb);
        spheres[numSpheres].reflectivity = refl;
        spheres[numSpheres].transparency = transp;
        spheres[numSpheres].refractiveIndex = ior;
        numSpheres++;
    }
}

void add_light(float x, float y, float z, float r, float g, float b, float intensity) {
    if (numLights < MAX_LIGHTS) {
        lights[numLights].position = vec3_new(x, y, z);
        lights[numLights].color = vec3_new(r, g, b);
        lights[numLights].intensity = intensity;
        numLights++;
    }
}

// ============================================================================
// RAY TRACING
// ============================================================================

typedef struct {
    Vec3 origin;
    Vec3 direction;
} Ray;

typedef struct {
    int hit;
    float t;
    Vec3 point;
    Vec3 normal;
    Vec3 color;
    float reflectivity;
    int sphereIdx;
} HitInfo;

HitInfo ray_sphere_intersect(Ray ray, Sphere sphere, int idx) {
    HitInfo hit;
    hit.hit = 0;
    hit.t = 999999.0f;
    hit.sphereIdx = idx;
    
    Vec3 oc = vec3_sub(ray.origin, sphere.center);
    float a = vec3_dot(ray.direction, ray.direction);
    float b = 2.0f * vec3_dot(oc, ray.direction);
    float c = vec3_dot(oc, oc) - sphere.radius * sphere.radius;
    float discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        float t = (-b - sqrtf(discriminant)) / (2.0f * a);
        if (t > 0.001f) {
            hit.hit = 1;
            hit.t = t;
            hit.point = vec3_add(ray.origin, vec3_mul(ray.direction, t));
            hit.normal = vec3_normalize(vec3_sub(hit.point, sphere.center));
            hit.color = sphere.color;
            hit.reflectivity = sphere.reflectivity;
        }
    }
    
    return hit;
}

float get_transparency(HitInfo hit, int sphereIdx) {
    if (sphereIdx >= 0 && sphereIdx < numSpheres) {
        return spheres[sphereIdx].transparency;
    }
    return 0.0f;
}

float get_refractive_index(int sphereIdx) {
    if (sphereIdx >= 0 && sphereIdx < numSpheres) {
        return spheres[sphereIdx].refractiveIndex;
    }
    return 1.0f;
}

HitInfo ray_plane_intersect(Ray ray, float planeY) {
    HitInfo hit;
    hit.hit = 0;
    hit.t = 999999.0f;
    
    // Plane at y = planeY, normal pointing up
    if (fabsf(ray.direction.y) > 0.0001f) {
        float t = (planeY - ray.origin.y) / ray.direction.y;
        if (t > 0.001f) {
            hit.hit = 1;
            hit.t = t;
            hit.point = vec3_add(ray.origin, vec3_mul(ray.direction, t));
            hit.normal = vec3_new(0, 1, 0);
            
            // Checkerboard pattern
            int cx = (int)floorf(hit.point.x);
            int cz = (int)floorf(hit.point.z);
            if ((cx + cz) % 2 == 0) {
                hit.color = vec3_new(0.8f, 0.8f, 0.8f);
            } else {
                hit.color = vec3_new(0.3f, 0.3f, 0.3f);
            }
            hit.reflectivity = 0.1f;
        }
    }
    
    return hit;
}

HitInfo trace_ray(Ray ray) {
    HitInfo closest;
    closest.hit = 0;
    closest.t = 999999.0f;
    closest.sphereIdx = -1;
    
    // Check sphere intersections
    for (int i = 0; i < numSpheres; i++) {
        HitInfo hit = ray_sphere_intersect(ray, spheres[i], i);
        if (hit.hit && hit.t < closest.t) {
            closest = hit;
        }
    }
    
    // Check ground plane
    HitInfo planeHit = ray_plane_intersect(ray, -2.0f);
    planeHit.sphereIdx = -1;
    if (planeHit.hit && planeHit.t < closest.t) {
        closest = planeHit;
    }
    
    return closest;
}

Vec3 shade(HitInfo hit, Ray ray, int depth) {
    if (!hit.hit) {
        // Black sky
        return vec3_new(0.0f, 0.0f, 0.0f);
    }
    
    Vec3 ambient = vec3_mul(hit.color, 0.05f);
    Vec3 diffuseAccum = vec3_new(0, 0, 0);
    Vec3 specularAccum = vec3_new(0, 0, 0);
    
    // Accumulate lighting from all light sources
    for (int l = 0; l < numLights; l++) {
        Vec3 lightDir = vec3_normalize(vec3_sub(lights[l].position, hit.point));
        
        // Shadow ray
        Ray shadowRay;
        shadowRay.origin = vec3_add(hit.point, vec3_mul(hit.normal, 0.001f));
        shadowRay.direction = lightDir;
        HitInfo shadowHit = trace_ray(shadowRay);
        
        float shadow = 1.0f;
        if (shadowHit.hit) {
            float distToLight = vec3_length(vec3_sub(lights[l].position, hit.point));
            if (shadowHit.t < distToLight) {
                // Check if blocker is transparent
                float transparency = get_transparency(shadowHit, shadowHit.sphereIdx);
                shadow = 0.2f + transparency * 0.5f;
            }
        }
        
        // Diffuse
        float diff = fmaxf(0.0f, vec3_dot(hit.normal, lightDir));
        Vec3 diffuse = vec3_mul(vec3_mul(hit.color, diff), shadow * lights[l].intensity);
        diffuse.x *= lights[l].color.x;
        diffuse.y *= lights[l].color.y;
        diffuse.z *= lights[l].color.z;
        diffuseAccum = vec3_add(diffuseAccum, diffuse);
        
        // Specular
        Vec3 viewDir = vec3_normalize(vec3_mul(ray.direction, -1.0f));
        Vec3 reflectDir = vec3_reflect(vec3_mul(lightDir, -1.0f), hit.normal);
        float spec = powf(fmaxf(0.0f, vec3_dot(viewDir, reflectDir)), 32.0f);
        Vec3 specular = vec3_mul(lights[l].color, spec * shadow * 0.4f);
        specularAccum = vec3_add(specularAccum, specular);
    }
    
    Vec3 finalColor = vec3_add(vec3_add(ambient, diffuseAccum), specularAccum);
    
    if (depth <= 0) return finalColor;
    
    // Get transparency for this object
    float transparency = get_transparency(hit, hit.sphereIdx);
    float ior = get_refractive_index(hit.sphereIdx);
    
    // Reflection with Fresnel
    if (hit.reflectivity > 0.01f) {
        float kr = fresnel(ray.direction, hit.normal, ior);
        Vec3 reflectDir = vec3_reflect(ray.direction, hit.normal);
        Ray reflectRay;
        reflectRay.origin = vec3_add(hit.point, vec3_mul(hit.normal, 0.001f));
        reflectRay.direction = reflectDir;
        
        HitInfo reflectHit = trace_ray(reflectRay);
        Vec3 reflectColor = shade(reflectHit, reflectRay, depth - 1);
        
        float reflectAmount = hit.reflectivity * kr;
        finalColor = vec3_add(
            vec3_mul(finalColor, 1.0f - reflectAmount),
            vec3_mul(reflectColor, reflectAmount)
        );
    }
    
    // Refraction for transparent objects
    if (transparency > 0.01f && depth > 0) {
        float kr = fresnel(ray.direction, hit.normal, ior);
        
        if (kr < 1.0f) {
            Vec3 refractDir = vec3_refract(ray.direction, hit.normal, 1.0f / ior);
            if (vec3_length(refractDir) > 0.01f) {
                Ray refractRay;
                refractRay.origin = vec3_sub(hit.point, vec3_mul(hit.normal, 0.001f));
                refractRay.direction = refractDir;
                
                HitInfo refractHit = trace_ray(refractRay);
                Vec3 refractColor = shade(refractHit, refractRay, depth - 1);
                
                // Blend refraction
                float refractAmount = transparency * (1.0f - kr);
                finalColor = vec3_add(
                    vec3_mul(finalColor, 1.0f - refractAmount),
                    vec3_mul(refractColor, refractAmount)
                );
            }
        }
    }
    
    return finalColor;
}

// ============================================================================
// VGA FUNCTIONS
// ============================================================================

void plot_pixel(int x, int y, uint16_t color) {
    if (x >= 0 && x < SCREEN_WIDTH && y >= 0 && y < SCREEN_HEIGHT) {
        *(volatile uint16_t *)(VGA_FRAMEBUFFER_BASE + (y << 10) + (x << 1)) = color;
    }
}

uint16_t vec3_to_rgb565(Vec3 color) {
    int r = (int)(fminf(1.0f, fmaxf(0.0f, color.x)) * 31.0f);
    int g = (int)(fminf(1.0f, fmaxf(0.0f, color.y)) * 63.0f);
    int b = (int)(fminf(1.0f, fmaxf(0.0f, color.z)) * 31.0f);
    return (r << 11) | (g << 5) | b;
}

void draw_scaled_pixel(int x, int y, uint16_t color) {
    // Draw SCALE_FACTOR x SCALE_FACTOR block
    for (int dy = 0; dy < SCALE_FACTOR; dy++) {
        for (int dx = 0; dx < SCALE_FACTOR; dx++) {
            plot_pixel(x * SCALE_FACTOR + dx, y * SCALE_FACTOR + dy, color);
        }
    }
}

// ============================================================================
// CAMERA & RENDERING
// ============================================================================

typedef struct {
    Vec3 position;
    Vec3 target;
    Vec3 up;
    float fov;
} Camera;

Camera camera;

void setup_camera() {
    camera.position = vec3_new(6.0f, 3.0f, 8.0f);
    camera.target = vec3_new(0, 0, 0);
    camera.up = vec3_new(0, 1, 0);
    camera.fov = 60.0f;
}

void render_scene() {
    setup_camera();
    
    Vec3 forward = vec3_normalize(vec3_sub(camera.target, camera.position));
    Vec3 right = vec3_normalize(vec3_sub(
        vec3_new(forward.z, 0, -forward.x),
        vec3_new(0, 0, 0)
    ));
    Vec3 up = vec3_normalize(vec3_sub(
        vec3_new(0, 1, 0),
        vec3_mul(forward, forward.y)
    ));
    
    float aspectRatio = (float)RENDER_WIDTH / (float)RENDER_HEIGHT;
    float fovRadians = camera.fov * 3.14159f / 180.0f;
    float fovScale = tanf(fovRadians * 0.5f);
    
    for (int y = 0; y < RENDER_HEIGHT; y++) {
        for (int x = 0; x < RENDER_WIDTH; x++) {
            // Calculate ray direction
            float px = (2.0f * (x + 0.5f) / RENDER_WIDTH - 1.0f) * aspectRatio * fovScale;
            float py = (1.0f - 2.0f * (y + 0.5f) / RENDER_HEIGHT) * fovScale;
            
            Vec3 rayDir = vec3_normalize(vec3_add(
                vec3_add(forward, vec3_mul(right, px)),
                vec3_mul(up, py)
            ));
            
            Ray ray;
            ray.origin = camera.position;
            ray.direction = rayDir;
            
            // Trace ray
            HitInfo hit = trace_ray(ray);
            Vec3 color = shade(hit, ray, 2);  // Max 2 bounces for refraction
            
            // Draw pixel
            uint16_t pixelColor = vec3_to_rgb565(color);
            draw_scaled_pixel(x, y, pixelColor);
        }
    }
}

// ============================================================================
// SCENE SETUP
// ============================================================================

void setup_scene() {
    // Add spheres with transparency
    // x, y, z, radius, r, g, b, reflectivity, transparency, refractive_index
    
    // Large central reflective sphere
    add_sphere(0, 0, 0, 1.5f, 0.9f, 0.9f, 0.9f, 0.8f, 0.0f, 1.0f);  // Silver reflective center
    
    // Smaller transparent/translucent spheres around it
    add_sphere(-2.5f, 0, 0, 0.6f, 0.9f, 0.2f, 0.2f, 0.2f, 0.7f, 1.5f);   // Red glass
    add_sphere(2.5f, 0, 0, 0.6f, 0.2f, 0.2f, 0.9f, 0.2f, 0.7f, 1.5f);    // Blue glass
    add_sphere(0, 0, -2.5f, 0.6f, 0.2f, 0.9f, 0.2f, 0.2f, 0.7f, 1.5f);   // Green glass
    add_sphere(0, 0, 2.5f, 0.6f, 0.9f, 0.9f, 0.2f, 0.2f, 0.7f, 1.52f);   // Yellow glass
    add_sphere(1.8f, 0, 1.8f, 0.5f, 0.9f, 0.5f, 0.9f, 0.3f, 0.5f, 1.4f); // Magenta translucent
    add_sphere(-1.8f, 0, -1.8f, 0.5f, 0.5f, 0.9f, 0.9f, 0.3f, 0.5f, 1.4f); // Cyan translucent
    
    // Multiple colored lights (boosted intensities, reduced ambient)
    add_light(5, 6, 5, 1.0f, 1.0f, 1.0f, 0.25f);     // White main light
    add_light(-4, 4, 3, 1.0f, 0.4f, 0.4f, 1.25f);    // Red fill light
    add_light(3, 3, -4, 0.4f, 0.6f, 1.0f, 1.25f);    // Blue accent light
    add_light(-0.5f, 3.5f, -0.5f, 0.2f, 1.0f, 0.2f, 1.25f); // Green light (equidistant from red/blue)
}

// ============================================================================
// MAIN
// ============================================================================

int main(void) {
    // Setup scene
    setup_scene();
    
    // Render static scene
    render_scene();
    
    // Keep display active
    while (1) {
        // Scene is already rendered, just wait
        for (volatile int i = 0; i < 1000000; i++) {
            __asm__ volatile ("nop");
        }
    }
    
    return 0;
}
