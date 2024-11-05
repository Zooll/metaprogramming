#include <cstdio>

template <int N>
struct Factorial {
    static constexpr int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static constexpr int value = 1;
};

int main() {
  printf("%d\n", Factorial<5>::value);
  return 0;
}