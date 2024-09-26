#include <iostream>
#include <string>
#include <cassert>
#include <cctype> // For isalnum and tolower

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    bool isPalindrome(string s) {
        size_t left{0};
        size_t right{s.length() - 1};

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            }
            else if (!isalnum(s[right])) {
                right --;
            }
            else {
                if (tolower(s[left++]) != tolower(s[right--])) {
                    return false;
                }
            }
        }
        return true;
    }
};

/* TEST
============================================================================= */
void test() {
    Solution solution;

    // Test case 1:
    assert(solution.isPalindrome("A man, a plan, a canal: Panama") == true);

    // Test case 2:
    assert(solution.isPalindrome("race a car") == false);

    // Test case 3
    assert(solution.isPalindrome(" ") == true);

    // Test case 4
    assert(solution.isPalindrome("ab@a") == true);

    // Test case 5
    assert(solution.isPalindrome("0P") == false);

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
============================================================================= */
int main() {
    test();
    return 0;
}
