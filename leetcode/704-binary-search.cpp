#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/* SOLUTION
============================================================================= */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left{0};
        int right{static_cast<int>(nums.size() - 1)};

        while (left <= right) {
            int mid{left + (right - left) / 2};
            if (target > nums[mid]) {
                left = mid + 1;
            } else if (target < nums[mid]) {
                right = mid - 1;
            } else return mid;
        }
        return -1;
    }
};

/* TEST
============================================================================= */
void test() {
    Solution solution;

    // Test case 1:
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    assert(solution.search(nums1, 9) == 4);

    // Test case 2:
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    assert(solution.search(nums2, 2) == -1);

    // Test case 3:
    vector<int> nums3 = {1, 2, 3, 4, 5};
    assert(solution.search(nums3, 1) == 0);

    // Test case 4:
    vector<int> nums4 = {1, 2, 3, 4, 5};
    assert(solution.search(nums4, 5) == 4);

    // Test case 5:
    vector<int> nums5 = {};
    assert(solution.search(nums5, 3) == -1);

    std::cout << "All tests passed!" << '\n';
}

/* MAIN
============================================================================= */
int main() {
    test();
    return 0;
}
