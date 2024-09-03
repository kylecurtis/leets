#include <iostream>
#include <vector>
#include <cassert>

/* SOLUTION
======================================================================= */
int positive_sum(const std::vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        if (num > 0) {
            sum += num;
        }
    }
    return sum;
}

/* TEST
======================================================================= */
void test() {
    assert(positive_sum(std::vector<int>{1, 2, 3, 4, 5}) == 15);
    assert(positive_sum(std::vector<int>{1, -2, 3, 4, 5}) == 13);
    assert(positive_sum(std::vector<int>{-1, 2, 3, 4, -5}) == 9);
    assert(positive_sum(std::vector<int>{}) == 0);
    assert(positive_sum(std::vector<int>{-1, -2, -3, -4, -5}) == 0);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
