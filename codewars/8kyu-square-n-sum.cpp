#include <iostream>
#include <vector>
#include <cassert>

/* SOLUTION
======================================================================= */
int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for (int num : numbers) {
        sum += num * num;
    }
    return sum;
}

/* TEST
======================================================================= */
void test() {
    assert(square_sum({1, 2}) == 5);
    assert(square_sum({0, 3, 4, 5}) == 50);
    assert(square_sum({}) == 0);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
