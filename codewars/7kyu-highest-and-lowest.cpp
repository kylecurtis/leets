#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string highAndLow(const std::string& numbers){
  std::stringstream ss(numbers);
  int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  while (ss >> temp) {
    min = (temp < min) ? temp : min;
    max = (temp > max) ? temp : max;
  };
  return std::to_string(max) + " " + std::to_string(min);
}

/* TEST
======================================================================= */
void test() {
    assert(highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") == "42 -9");
    assert(highAndLow("1 2 3") == "3 1");
    assert(highAndLow("-3 -2 -1") == "-1 -3");
    assert(highAndLow("5") == "5 5");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
