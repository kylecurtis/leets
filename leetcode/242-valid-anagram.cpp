#include <iostream>
#include <string>
#include <cassert>
#include <unordered_map>

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Anagram must have equal lengths!
        // Early return if the lengths don't match.
        if (s.length() != t.length()) {
            return false;
        }

        // Unordered_map to track the frequency of characters in 's'.
        unordered_map<char, int> map;

        // Increment the count for each character in 's'.
        // If the character is not already in the map, it will automatically
        // be added with a value of 1 (default 0 + 1).
        for (char c : s) {
            map[c]++;
        }

        // Decrement the count for each character in 't'.
        // If any count goes below zero, strings are not anagrams.
        for (char c : t) {
            if (--map[c] < 0) {
                return false;
            }
        }

        // All checks passed, strings are anagrams.
        return true;
    }
};

/* TEST
============================================================================= */
void test() {
    Solution solution;

    // Test case 1:
    assert(solution.isAnagram("anagram", "nagaram") == true);

    // Test case 2:
    assert(solution.isAnagram("rat", "car") == false);

    // Test case 3:
    assert(solution.isAnagram("", "") == true);

    // Test case 4:
    assert(solution.isAnagram("listen", "silent") == true);

    // Test case 5:
    assert(solution.isAnagram("aacc", "ccac") == false);

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
============================================================================= */
int main() {
    test();
    return 0;
}
