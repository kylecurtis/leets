#include <iostream>
#include <cassert>

/* SOLUTION
======================================================================= */
int makeNegative(int num)
{
    if (num <= 0) {
        return num;
    }
    return num * -1;
}

/* TEST
======================================================================= */
void test() {
    assert(makeNegative(1) == -1);
    assert(makeNegative(42) == -42);
    assert(makeNegative(-1) == -1);
    assert(makeNegative(-42) == -42);
    assert(makeNegative(0) == 0);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
