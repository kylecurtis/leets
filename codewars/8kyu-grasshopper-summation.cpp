#include <iostream>
#include <cassert>

/* SOLUTION
======================================================================= */
/* SUM OF NATURAL NUMBERS FORMULA:
Sum = n * (n + 1) / 2

- 'num' represents the highest number in the range (1 to 'num').
- The sum of numbers from 1 to 'num' can be calculated by:
    - Pairing numbers from opposite ends of the range (e.g., 1 + num, 2 + (num - 1), etc.).
    - Each pair sums to 'num + 1'.
    - There are 'num / 2' such pairs (for even numbers) or 'num / 2 + 1' for odd numbers.
    - This gives us the formula: num * (num + 1) / 2.
*/

int summation(int num) {
    return (num * (num + 1)) / 2;
}

/* TEST
======================================================================= */
void test() {
    assert(summation(1) == 1);
    assert(summation(8) == 36);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
