#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string number_to_string(int num) {
    return std::to_string(num);

}

/* TEST
======================================================================= */
void test() {
    assert(number_to_string(1+2) == "3");
    assert(number_to_string(67) == "67");
    assert(number_to_string(-5) == "-5");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
