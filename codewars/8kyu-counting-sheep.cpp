#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/* SOLUTION
======================================================================= */
int count_sheep(vector<bool> arr)
{
    int i = 0;
    for (bool b : arr) {
        if (b) {
            i++;
        }
    }
    return i;
}

// ALTERNATIVE SOLUTION:
/*
int count_sheep(std::vector<bool> v) {
    return std::count(v.cbegin(), v.cend(), true);
}
*/

/* TEST
======================================================================= */
void test() {
    vector<bool> array1 = { true,  true,  true,  false,
                            true,  true,  true,  true,
                            true,  false, true,  false,
                            true,  false, false, true,
                            true,  true,  true,  true,
                            false, false, true,  true };

    assert(count_sheep(array1) == 17);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
