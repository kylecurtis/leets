#include <iostream>
#include <cinttypes>
#include <string>
#include <algorithm>
#include <cassert>

/* SOLUTION
======================================================================= */
uint64_t descendingOrder(uint64_t a) {
    std::string number = std::to_string(a);
    std::sort(number.begin(), number.end(), std::greater<char>());
    return std::stoull(number);
}

/* TEST
======================================================================= */
void test() {
    assert(descendingOrder(0) == 0);
    assert(descendingOrder(1) == 1);
    assert(descendingOrder(15) == 51);
    assert(descendingOrder(1021) == 2110);
    assert(descendingOrder(123456789) == 987654321);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
