#include <iostream>
#include <cassert>

/* SOLUTION
======================================================================= */
int opposite(int number) 
{
    return number * -1;
}

/* TEST
======================================================================= */
void test() {
    assert(opposite(1) == -1);
    assert(opposite(-1) == 1);
    assert(opposite(0) == 0);
    assert(opposite(100) == -100);
    assert(opposite(-50) == 50);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
