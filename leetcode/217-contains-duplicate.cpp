#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_set>

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> map;

        for (size_t num : nums) {
            if (map.find(num) != map.end()) {
                return true;
            }
            map.insert(num);
        }
        return false;
    }
};

/* TEST
============================================================================= */
void test() {
    Solution solution;

    // Test case 1:
    vector<int> nums1 = {1, 2, 3, 1};
    assert(solution.containsDuplicate(nums1) == true);

    // Test case 2:
    vector<int> nums2 = {1, 2, 3, 4};
    assert(solution.containsDuplicate(nums2) == false);

    // Test case 3:
    vector<int> nums3 = {1, 1, 1, 1};
    assert(solution.containsDuplicate(nums3) == true);

    // Test case 4:
    vector<int> nums4 = {};
    assert(solution.containsDuplicate(nums4) == false);

    // Test case 5:
    vector<int> nums5 = {2, 14, 18, 22, 22};
    assert(solution.containsDuplicate(nums5) == true);

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
============================================================================= */
int main() {
    test();
    return 0;
}
