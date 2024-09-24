#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

/* TEST
============================================================================= */
void test() {
    Solution solution;

    // Test case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s1);
    assert((s1 == vector<char>{'o', 'l', 'l', 'e', 'h'}));

    // Test case 2
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    solution.reverseString(s2);
    assert((s2 == vector<char>{'h', 'a', 'n', 'n', 'a', 'H'}));

    // Test case 3
    vector<char> s3 = {'A'};
    solution.reverseString(s3);
    assert(s3 == vector<char>{'A'});

    // Test case 4
    vector<char> s4 = {'t', 'e', 's', 't'};
    solution.reverseString(s4);
    assert((s4 == vector<char>{'t', 's', 'e', 't'}));

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
============================================================================= */
int main() {
    test();
    return 0;
}
