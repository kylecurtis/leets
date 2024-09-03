#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string even_or_odd(int number)
{
    if (number % 2 == 0) {
        return "Even";
    }

    return "Odd";
}

/* TEST
======================================================================= */
void test() {
    // Test case: zero
    assert(even_or_odd(0) == "Even");

    // Test cases: positive odd numbers
    assert(even_or_odd(1) == "Odd");
    assert(even_or_odd(21) == "Odd");

    // Test cases: positive even numbers
    assert(even_or_odd(2) == "Even");
    assert(even_or_odd(100) == "Even");

    // Test cases: negative odd numbers
    assert(even_or_odd(-1) == "Odd");
    assert(even_or_odd(-21) == "Odd");

    // Test cases: negative even numbers
    assert(even_or_odd(-2) == "Even");
    assert(even_or_odd(-100) == "Even");

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();  // Run the tests
    return 0;
}
