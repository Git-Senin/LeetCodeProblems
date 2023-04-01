#pragma region Instructions
// 704. Binary Search

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

// Constraints:

// 1 <= nums.length <= 104
// -104 < nums[i], target < 104
// All the integers in nums are unique.
// nums is sorted in ascending order.
#pragma endregion
#include <vector>
using std::vector;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return bsearch(nums, 0, nums.size() - 1, target);
    }
    int bsearch(vector<int>& nums, int left, int right, int target){
        if(right >= left) {
                
            int mid = (left + right) / 2;
            if(target == nums[mid]){
                return mid;
            }
                
            if(target < nums[mid]){
                return bsearch(nums, left, mid - 1, target);
            }
            else{
                return bsearch(nums, mid + 1, right, target);
            }
        }
        
        return -1;
    }
};