#include <iostream>
#include <cassert>

/* SOLUTION
======================================================================= */
int multiply(int a, int b)
{
    return a * b;
}

/* TEST
======================================================================= */
void test() {
    // Basic tests
    assert(multiply(1, 2) == 2);
    assert(multiply(0, 100) == 0);
    assert(multiply(-1, 10) == -10);
    assert(multiply(5, 5) == 25);

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
