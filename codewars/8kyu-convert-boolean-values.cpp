#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string bool_to_word(bool value)
{
    return value ? "Yes" : "No";
}

/* TEST
======================================================================= */
void test() {
    assert(bool_to_word(true) == "Yes");
    assert(bool_to_word(false) == "No");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
