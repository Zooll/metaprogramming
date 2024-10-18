#include <iostream>
#include "fold_expression.h"

// Fold expression version (C++17 and later)
template<typename... Args>
void print_fold(Args... args) {
    ((std::cout << args << std::endl), ...);
}

int main() {
    std::cout << "Using fold expression:" << std::endl;
    print_fold(12, 1.56, "Hello, World!");
    return 0;
}