#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>

using namespace std;

/* SOLUTION
================================================================================= */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Hashmap for checked values
        unordered_map<int, int> checked;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If complement is found, return its index and current index
            if (checked.find(complement) != checked.end()) {
                return {checked[complement], i};
            }

            // Otherwise, add the current number and its index to the map
            checked[nums[i]] = i;
        }

        return {};
    }
};

/* TEST
================================================================================= */
void test() {
    Solution solution;

    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> expected1 = {0, 1};
    assert(solution.twoSum(nums1, target1) == expected1);

    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> expected2 = {1, 2};
    assert(solution.twoSum(nums2, target2) == expected2);

    // Test case 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> expected3 = {0, 1};
    assert(solution.twoSum(nums3, target3) == expected3);

    std::cout << "All test cases passed!" << '\n';
}

/* MAIN
================================================================================= */
int main() {
    test();
    return 0;
}
