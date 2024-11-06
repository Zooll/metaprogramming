#include <cstdio>

constexpr int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
  printf("%d\n", factorial(5));
}