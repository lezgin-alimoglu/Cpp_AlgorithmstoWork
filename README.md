# CPP Algorithm Repository

Welcome! This repository contains C++ implementations of algorithms for learning and fun. Each algorithm includes background information to help understand the fundamentals.

## 1. Euler Algorithm

The Euler Algorithm, introduced by Leonard Euler, finds the greatest common divisor (GCD) of two integers. It is based on the principle that subtracting the smaller number from the larger one does not change the GCD. Repeating this process reduces the problem until one number is a multiple of the other, at which point the GCD is found.

### Steps:
1. Start with two integers, `a` and `b` (`a > b`).
2. Subtract `b` from `a`.
3. Repeat until `a` becomes a multiple of `b`.
4. The GCD is the final value of `b`.

### Example:
For `a = 28` and `b = 16`:
- `28 - 16 = 12`
- `16 - 12 = 4`
- `12 - 4 = 8`
- `8 - 4 = 4`

**Result:** The GCD is `4`.

---

Feel free to explore the code, learn, and contribute!
