#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/* SOLUTION
======================================================================= */
int findSmallest(vector<int> list)
{
    int target = list.at(0);
    for (int i = 1; i < list.size(); ++i) {
        if (list[i] < target) {
            target = list[i];
        }
    }
        return target;
}

/* TEST
======================================================================= */
void test() {
    assert(findSmallest({3, 5, 2}) == 2);
    assert(findSmallest({7, 4, 6, 8}) == 4);
    assert(findSmallest({17, 21, 15, 36, 96}) == 15);
    assert(findSmallest({3, 9, 13, 10, 5, 3, 9, 5}) == 3);
    assert(findSmallest({-12, -52, -27}) == -52);
    assert(findSmallest({-3, -27, -4, -2, -27, -2}) == -27);
    assert(findSmallest({-16, -37, -8, -46, -29}) == -46);
    assert(findSmallest({-14, -102, -96, -36, -46, -15, -44}) == -102);
    assert(findSmallest({12, 0, -27}) == -27);
    assert(findSmallest({-13, -50, 57, 13, 67, -13, 57, 108, 67}) == -50);
    assert(findSmallest({-23, 12, 0, -47, -3, 24}) == -47);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
