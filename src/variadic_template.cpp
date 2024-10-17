#include <iostream>
#include "variadic_template.h"

// Base case for recursion
template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}

// Variadic template function
template<typename T, typename... Args>
void print(T firstValue, Args... restValues) {
    std::cout << firstValue << std::endl;
    print(restValues...);
}

int main() {
    std::cout << "Using recursive variadic template:" << std::endl;
    print(12, 1.56, "Hello, World!");
    return 0;
}