#include <cstdio>
#include <cmath>

struct Point {
    int x, y;

    constexpr Point(int x, int y) : x(x), y(y) {}
    constexpr float len() const { return sqrt(x * x + y * y); }
};

constexpr Point p(3, 4);

int main() {
  printf("%f\n", p.len());
  return 0;
}