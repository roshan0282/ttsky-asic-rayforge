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

## 2.1 - Ray Plane Intersect
A plane is defined by its normal vector **N** and one of its points **Q** such that we obtain the equation:

$$\mathbf{N} \cdot \mathbf{Q} = d$$

If we substitute the ray vector into the point vector **Q**, we can solve for a potential intersection via isolating for t

$$t = (d - \mathbf{N} \cdot \mathbf{O}) / (\mathbf{N} \cdot \mathbf{D})$$

If the ray does not intersect the plane (ie. parallel) t = 0. If t < 0, then the intersection occurs behind the origin of the ray (ie. invalid). Otherwise, any value of t > 0 means that the ray intersects the plane.

In terms of hardware, this requires the following primitive operations:
1. Two **Fixed Dot Products** (each require 3 multiplies + 2 adds)
2. One **Fixed Subtraction**
3. One **Fixed Division**

## 2.2 - Ray Sphere Intersect
A sphere is defined by its center **C** and scalar radius r

$$|\mathbf{P} - \mathbf{C}|^2 = r^2$$

If we substitute the ray vector into the point vector **P**, we obtain a quadratic equation in t whose discriminant we can compute to determine the type of intersection.

$$|\mathbf{O} + t\mathbf{D} - \mathbf{C}|^2 = r^2$$

We will let $\mathbf{L} = \mathbf{O} - \mathbf{C}$ which represents the vector from the sphere center to the ray origin.

$$ (\mathbf{D} \cdot \mathbf{D}) t^2 + 2 (\mathbf{D} \cdot \mathbf{L})t + (\mathbf{L} \cdot \mathbf{L} - r^2) = 0$$

To compute the discriminant $ \Delta = b^2 - 4ac$ we need the following operations:
1. **Fixed Vector Subtraction** to compute $\mathbf{L} = \mathbf{O} - \mathbf{C}$
2. **Fixed Dot Product** to compute $\mathbf{D} \cdot \mathbf{L}$
3. 

## 2.3 - Plane Effect

## 2.4 - Sphere Effect