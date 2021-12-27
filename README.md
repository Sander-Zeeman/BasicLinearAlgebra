# BasicLinearAlgebra
A simple LA library in C.

Mostly used in my journey towards mastering Computer Graphics, but it could be used for a variety of purposes.
Features are added whenever I need them for some side project, so the repo may miss integral parts of LA while including very niche tasks.

## Data Types

- Vec2
    - x (float)
    - y (float)

- iVec2
    - x (int)
    - y (int)

- Vec3
    - x (float)
    - y (float)
    - z (float)

- iVec3
    - x (int)
    - y (int)
    - z (int)

## Functions
### Utilities
- Create a Vector (create_<VecType>)
- Print the contents of a vector (print_<VecType>)
- Distance (dist_<Vec2Type>) (int -> Manhattan, float -> Euclidean) 
- Normalize (norm_<VecType>) (Not for integer vectors)

### Calculations
- Add scalar to Vector (addn_<VecType>)
- Add Vector to Vector (add_<VecType>)
- Subtract scalar from Vector (subn_<VecType>)
- Subtract Vector from Vector (sub_<VecType>)
- Multiply Vector with scalar (multn_<VecType>)
- Element-wise multiplication (mult_<VecType>)






