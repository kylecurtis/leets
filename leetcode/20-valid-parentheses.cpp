#include <iostream>
#include <string>
#include <cassert>
#include <stack>

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    bool isValid(string s) {

        // Stack to keep track of opening brackets
        stack<char> stk;

        // Iterate through each character in the string
        for (char c : s) {

            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            }

            // If it's a closing bracket but the stack is empty, it means
            // there's no matching opening bracket
            else if (stk.empty()) {
                return false;
            }

            // Check if the closing bracket matches the top of the stack
            // (the most recent opening bracket)
            else if (
                c == ')' && stk.top() == '(' ||
                c == '}' && stk.top() == '{' ||
                c == ']' && stk.top() == '[') {
                    // Pop the matching opening bracket from the stack
                    stk.pop();
                }

            // False if the closing bracket doesn't match the top of the stack
            else return false;
        }

        // Return true only if the stack is empty
        // (i.e., all opening brackets had matching closing brackets)
        return stk.empty();
    }
};


void test() {
    Solution solution;

    // Test case 1:
    assert(solution.isValid("()") == true);

    // Test case 2:
    assert(solution.isValid("()[]{}") == true);

    // Test case 3:
    assert(solution.isValid("(]") == false);

    // Test case 4:
    assert(solution.isValid("([)]") == false);

    // Test case 5:
    assert(solution.isValid("{[]}") == true);

    std::cout << "All tests passed!" << '\n';
}

int main() {
    test();
    return 0;
}
