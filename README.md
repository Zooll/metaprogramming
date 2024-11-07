# Variadic Templates in C++
This project demonstrates the use of variadic templates and fold expressions in C++.

## Project Structure
```
metaprogramming/
├── include/
│   └── variadic_template.h          # Declarations for variadic template utilities
├── src/
│   ├── variadic_template.cpp        # Recursive and fold-based variadic template printing
│   ├── fold_expression.cpp          # Fold expressions: summing and printing variadic args
│   └── constexpr_examples/
│       ├── conditional_constexpr.cpp   # Conditional branching at compile-time
│       ├── factorial_constexpr.cpp     # Factorial using constexpr
│       ├── fibonacci_numbers.cpp       # Compile-time Fibonacci number generator
│       ├── point_constexpr.cpp         # Struct with constexpr constructor and methods
│       ├── sum_to_n_constexpr.cpp      # Compute sum from 1 to N at compile-time
│       └── template_recursion.cpp      # Classic template recursion for factorial
├── CMakeLists.txt                   # Build configuration
├── .gitignore
├── LICENSE
└── README.md
```

## Requirements
- C++17 or later
- CMake

## Build Instructions
```sh
mkdir build && cd build
cmake ..
make
./variadic_template
./fold_expression
```

## License
This project is licensed under the MIT License - see the LICENSE file for details.