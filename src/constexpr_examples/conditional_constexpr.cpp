#include <iostream>

template <typename T>
void print_type_info(const T& val) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Integer: " << val << std::endl;
    } else {
        std::cout << "Not an integer" << std::endl;
    }
}

int main() {
  print_type_info(15);
  return 0;
}