# 1 - Primitive Floating Point Operations

## 1.1 - Fixed Point Comparison

Fixed point comparison is **identical to signed integer comparison** because both operands share the same decimal point position.

### Mathematical Basis

If `a` and `b` are both Q16.16, then:
```
a > b  ⟺  (a_int × 2^16 + a_frac) > (b_int × 2^16 + b_frac)
```

Since the scale factor (2^16) is common to both sides, it cancels out, reducing to plain integer comparison.

## 1.2 - Fixed Point Addition/Subtraction

Addition and subtraction are **identical to integer addition/subtraction** when both operands share the same Q format.

### Mathematical Basis

```
(a_int + a_frac/2^16) + (b_int + b_frac/2^16) 
  = (a_int + b_int) + (a_frac + b_frac)/2^16
```

The fractional parts add naturally because they share the same denominator.

## 1.3 - Fixed Point Multiplication

Multiplication requires **post-processing** because multiplying two Q16.16 numbers produces a Q32.32 result in a 64-bit product. You must shift right by 16 bits to restore Q16.16 format.

### Mathematical Basis

```
(a × 2^-16) × (b × 2^-16) = (a × b) × 2^-32
```

To convert back to Q16.16 (scale 2^-16), we need to shift right by 16 bits:

```
result_Q16.16 = (a × b) >> 16
```

## 1.4 - Fixed Point Division

Division is the **most expensive** fixed point operation. To maintain precision, you must pre-shift the numerator left before dividing.

### Mathematical Basis

```
(a × 2^-16) / (b × 2^-16) = a/b
```

This gives an integer result, losing all fractional precision. To get Q16.16, we need:

```
result_Q16.16 = (a << 16) / b
```

The left shift by 16 pre-scales the numerator so that the integer quotient has the fractional bits baked in.


## 1.5 - Fixed Point Dot Product

The dot product **D** · **L** = D_x × L_x + D_y × L_y + D_z × L_z is a compound operation built from multiplies and adds.

### Mathematical Basis

```
D · L = Dx·Lx + Dy·Ly + Dz·Lz
```

In Q16.16:
```
result = (Dx × Lx >> 16) + (Dy × Ly >> 16) + (Dz × Lz >> 16)
```

# 2 - Ray Tracing Pipeline Operations

The sections below outline the primitive arithmetic operations required to compute the desired result. We will define the ray vector as:

$$\mathbf{P}(t) = \mathbf{Origin} + t \times \mathbf{Direction} = \mathbf{O} + t \times \mathbf{D}$$

where t is a scalar parameter that denotes how far along the ray a point is.

## 2.1 - Ray Plane Intersection

A plane is defined by its normal vector **N** and one of its points **Q** such that we obtain the equation:

$$\mathbf{N} \cdot \mathbf{Q} = d$$

If we substitute the ray vector into the point vector **Q**, we can solve for a potential intersection via isolating for t:

$$t = (d - \mathbf{N} \cdot \mathbf{O}) / (\mathbf{N} \cdot \mathbf{D})$$

If the ray does not intersect the plane (i.e., parallel), the denominator $\mathbf{N} \cdot \mathbf{D} = 0$. If $t < 0$, then the intersection occurs behind the origin of the ray (i.e., invalid). Otherwise, any value of $t > 0$ means that the ray intersects the plane.

### Primitive Operations Required

1. Two **Fixed Dot Products**: $\mathbf{N} \cdot \mathbf{O}$ and $\mathbf{N} \cdot \mathbf{D}$ (each requires 3 multiplies + 2 adds)
2. One **Fixed Subtraction**: $d - \mathbf{N} \cdot \mathbf{O}$
3. One **Fixed Division**: numerator / $\mathbf{N} \cdot \mathbf{D}$
4. One **Fixed Comparison**: check if $\mathbf{N} \cdot \mathbf{D} = 0$ (parallel check)
5. One **Fixed Comparison**: check if $t < 0$ (behind ray check)

---

## 2.2 - Ray Sphere Intersection

A sphere is defined by its center **C** and scalar radius $r$:

$$|\mathbf{P} - \mathbf{C}|^2 = r^2$$

If we substitute the ray vector into the point vector **P**, we obtain a quadratic equation in $t$ whose discriminant we can compute to determine the type of intersection:

$$|\mathbf{O} + t\mathbf{D} - \mathbf{C}|^2 = r^2$$

We will let $\mathbf{L} = \mathbf{O} - \mathbf{C}$, which represents the vector from the sphere center to the ray origin:

$$(\mathbf{D} \cdot \mathbf{D}) t^2 + 2 (\mathbf{D} \cdot \mathbf{L})t + (\mathbf{L} \cdot \mathbf{L} - r^2) = 0$$

This is a quadratic $at^2 + bt + c = 0$ where:
- $a = \mathbf{D} \cdot \mathbf{D}$ (equals 1 if **D** is normalized)
- $b = 2(\mathbf{D} \cdot \mathbf{L})$
- $c = \mathbf{L} \cdot \mathbf{L} - r^2$

The discriminant $\Delta = b^2 - 4ac$ determines the intersection type:
- $\Delta < 0$: no intersection (ray misses sphere)
- $\Delta = 0$: tangent (ray grazes sphere)
- $\Delta > 0$: two intersections (ray enters and exits)

For valid intersections, solve for $t = \frac{-b \pm \sqrt{\Delta}}{2a}$ and take the smallest positive value.

### Primitive Operations Required

1. **Fixed Vector Subtraction**: $\mathbf{L} = \mathbf{O} - \mathbf{C}$ (3 subtractions)
2. **Fixed Dot Product**: $\mathbf{D} \cdot \mathbf{L}$ (3 multiplies + 2 adds)
3. **Fixed Dot Product**: $\mathbf{D} \cdot \mathbf{D}$ (3 multiplies + 2 adds)
4. **Fixed Dot Product**: $\mathbf{L} \cdot \mathbf{L}$ (3 multiplies + 2 adds)
5. **Fixed Multiplication**: $b = 2(\mathbf{D} \cdot \mathbf{L})$ (left shift by 1)
6. **Fixed Subtraction**: $c = \mathbf{L} \cdot \mathbf{L} - r^2$
7. **Fixed Multiplication**: $b^2$
8. **Fixed Multiplication**: $4a$ (left shift by 2)
9. **Fixed Multiplication**: $4ac$
10. **Fixed Subtraction**: $\Delta = b^2 - 4ac$
11. **Fixed Comparison**: check if $\Delta < 0$ (miss check, early exit)
12. **Fixed Square Root**: $\sqrt{\Delta}$
13. **Fixed Negation**: $-b$
14. **Fixed Addition**: $-b + \sqrt{\Delta}$
15. **Fixed Subtraction**: $-b - \sqrt{\Delta}$
16. **Fixed Division** or **shift**: $\frac{-b \pm \sqrt{\Delta}}{2a}$ (shift if $a = 1$)
17. **Fixed Comparison**: check if $t_0 > 0$ and $t_1 > 0$ (select smallest positive root)

---

## 2.3 - Ray Triangle Intersection

A triangle is defined by three vertices **V0**, **V1**, **V2**. The Möller-Trumbore algorithm computes the intersection and barycentric coordinates in a single pass without computing the plane equation explicitly.

Given ray $\mathbf{O} + t\mathbf{D}$ and triangle vertices, we solve:

$$\mathbf{O} + t\mathbf{D} = (1 - u - v)\mathbf{V_0} + u\mathbf{V_1} + v\mathbf{V_2}$$

where $u, v$ are barycentric coordinates. The intersection is valid if:
- $t > 0$ (in front of ray)
- $u \geq 0, v \geq 0, u + v \leq 1$ (inside triangle)

The algorithm computes two edge vectors:

$$\mathbf{E_1} = \mathbf{V_1} - \mathbf{V_0}, \quad\mathbf{E_2} = \mathbf{V_2} - \mathbf{V_0}$$

Then uses cross products and dot products:

$$\mathbf{P} = \mathbf{D} \times \mathbf{E_2} \rightarrow\text{det} = \mathbf{E_1} \cdot \mathbf{P}$$

If $|\text{det}| < \epsilon$, the ray is parallel to the triangle. Otherwise:

$$\text{inv\_det} = \frac{1}{\text{det}}, \quad\mathbf{T} = \mathbf{O} - \mathbf{V_0}, \quad u = (\mathbf{T} \cdot \mathbf{P}) \times \text{inv\_det}$$

If $u < 0$ or $u > 1$, exit early (outside triangle).

$$\mathbf{Q} = \mathbf{T} \times \mathbf{E_1} \rightarrow v = (\mathbf{D} \cdot \mathbf{Q}) \times \text{inv\_det}$$

If $v < 0$ or $u + v > 1$, exit early (outside triangle).

$$t = (\mathbf{E_2} \cdot \mathbf{Q}) \times \text{inv\_det}$$

If $t > 0$, we have a valid intersection.

### Primitive Operations Required

1. **Fixed Vector Subtraction**: $\mathbf{E_1} = \mathbf{V_1} - \mathbf{V_0}$ (3 subtractions)
2. **Fixed Vector Subtraction**: $\mathbf{E_2} = \mathbf{V_2} - \mathbf{V_0}$ (3 subtractions)
3. **Fixed Cross Product**: $\mathbf{P} = \mathbf{D} \times \mathbf{E_2}$ (6 multiplies + 3 subtractions)
4. **Fixed Dot Product**: $\text{det} = \mathbf{E_1} \cdot \mathbf{P}$ (3 multiplies + 2 adds)
5. **Fixed Comparison**: check if $|\text{det}| < \epsilon$ (parallel check, early exit)
6. **Fixed Reciprocal**: $\text{inv\_det} = \frac{1}{\text{det}}$ (fast reciprocal, 6-10 cycles)
7. **Fixed Vector Subtraction**: $\mathbf{T} = \mathbf{O} - \mathbf{V_0}$ (3 subtractions)
8. **Fixed Dot Product**: $\mathbf{T} \cdot \mathbf{P}$ (3 multiplies + 2 adds)
9. **Fixed Multiplication**: $u = (\mathbf{T} \cdot \mathbf{P}) \times \text{inv\_det}$
10. **Fixed Comparison**: check if $u < 0$ or $u > 1$ (bounds check, early exit)
11. **Fixed Cross Product**: $\mathbf{Q} = \mathbf{T} \times \mathbf{E_1}$ (6 multiplies + 3 subtractions)
12. **Fixed Dot Product**: $\mathbf{D} \cdot \mathbf{Q}$ (3 multiplies + 2 adds)
13. **Fixed Multiplication**: $v = (\mathbf{D} \cdot \mathbf{Q}) \times \text{inv\_det}$
14. **Fixed Comparison**: check if $v < 0$ (bounds check, early exit)
15. **Fixed Addition**: $u + v$
16. **Fixed Comparison**: check if $u + v > 1$ (bounds check, early exit)
17. **Fixed Dot Product**: $\mathbf{E_2} \cdot \mathbf{Q}$ (3 multiplies + 2 adds)
18. **Fixed Multiplication**: $t = (\mathbf{E_2} \cdot \mathbf{Q}) \times \text{inv\_det}$
19. **Fixed Comparison**: check if $t > 0$ (valid intersection check)

### Note on Cross Products

The cross product $\mathbf{A} \times \mathbf{B}$ is defined as:

$$\mathbf{A} \times \mathbf{B} = \begin{bmatrix} A_y B_z - A_z B_y \\ A_z B_x - A_x B_z \\ A_x B_y - A_y B_x \end{bmatrix}$$

In hardware, this requires 6 multiplications and 3 subtractions, which can be fully parallelized.

---

## 2.4 - Surface Normal Calculation

After finding an intersection point, we need the surface normal **N** at that point for shading calculations (lighting, reflections, etc.).

### For Spheres

The normal at intersection point **P** on a sphere with center **C** is:

$$\mathbf{N} = \frac{\mathbf{P} - \mathbf{C}}{r}$$

or equivalently using our ray equation:

$$\mathbf{N} = \frac{\mathbf{O} + t\mathbf{D} - \mathbf{C}}{r}$$

Since we already computed $\mathbf{L} = \mathbf{O} - \mathbf{C}$ during intersection:

$$\mathbf{N} = \frac{\mathbf{L} + t\mathbf{D}}{r}$$

### Primitive Operations Required (Sphere Normal)

1. **Fixed Scalar Multiplication**: $t\mathbf{D}$ (3 scalar multiplies)
2. **Fixed Vector Addition**: $\mathbf{L} + t\mathbf{D}$ (3 additions)
3. **Fixed Division**: divide by $r$ to get unnormalized normal (or skip and normalize)
4. **Fixed Normalization**: convert to unit vector (see below)

### For Triangles

The normal for a triangle is simply the cross product of two edge vectors:

$$\mathbf{N} = \mathbf{E_1} \times \mathbf{E_2} = (\mathbf{V_1} - \mathbf{V_0}) \times (\mathbf{V_2} - \mathbf{V_0})$$

This can be precomputed and stored with the triangle geometry, requiring no computation at intersection time. For smooth shading, vertex normals can be interpolated using barycentric coordinates:

$$\mathbf{N} = (1 - u - v)\mathbf{N_0} + u\mathbf{N_1} + v\mathbf{N_2}$$

### Primitive Operations Required (Triangle Normal, Smooth Shading)

1. **Fixed Scalar Multiplication**: $(1 - u - v)\mathbf{N_0}$ (3 scalar multiplies)
2. **Fixed Scalar Multiplication**: $u\mathbf{N_1}$ (3 scalar multiplies)
3. **Fixed Scalar Multiplication**: $v\mathbf{N_2}$ (3 scalar multiplies)
4. **Fixed Vector Addition**: sum all three scaled normals (6 additions)
5. **Fixed Normalization**: convert to unit vector
