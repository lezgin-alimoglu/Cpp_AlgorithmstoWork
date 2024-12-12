# CPP Algorithm Repository

Welcome! This repository contains C++ implementations of algorithms for learning and fun. Each algorithm includes background information to help understand the fundamentals.

## 1. Euler Algorithm

The Euler Algorithm, introduced by Leonard Euler, finds the greatest common divisor (GCD) of two integers. It is based on the principle that subtracting the smaller number from the larger one does not change the GCD. Repeating this process reduces the problem until one number is a multiple of the other, at which point the GCD is found.

### Steps:
1. Start with two integers, `a` and `b` (`a > b`).
2. Subtract `b` from `a`.
3. Repeat until `a` becomes a multiple of `b`.
4. The GCD is the final value of `b`.

## 2. Prime Number Generator

This project generates the first `n` prime numbers using a simple algorithm and stores them in a vector. The program efficiently identifies primes by checking divisibility with previously found primes.

### Features
- Fills a list of the first `n` prime numbers.
- Uses a vector to store primes for quick access.
- Outputs the `n`th prime number.

## How It Works
1. **Initialization:** The first prime number (2) is added to the list.
2. **Prime Check:** For each subsequent number, it checks divisibility with all previously found primes.
3. **Storage:** Primes are stored in a global vector for efficient reuse.


