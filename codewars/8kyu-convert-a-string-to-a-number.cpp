#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
int string_to_number(const std::string& s) {
    return std::stoi(s);
}

/* TEST
======================================================================= */
void test() {
    assert(string_to_number("123456") == 123456);
    assert(string_to_number("352605") == 352605);
    assert(string_to_number("-321405") == -321405);
    assert(string_to_number("-7") == -7);
    assert(string_to_number("0") == 0);
    assert(string_to_number("-0") == 0);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
