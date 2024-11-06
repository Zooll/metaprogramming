#include <cstdio>

constexpr int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}
static_assert(sum_to_n(15) == 120, "Something went wrong");

int main() {
  printf("%d\n", sum_to_n(15));
  return 0;
}