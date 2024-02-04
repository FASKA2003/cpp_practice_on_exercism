#include <bitset>
#include <iostream>

int positions_to_quantity(unsigned long num) {
  std::bitset<64> number(num);
  return number.count();
}

int main(int argc, char *argv[]) {
  std::cout << positions_to_quantity(2000000000) << std::endl;
  return 0;
}
