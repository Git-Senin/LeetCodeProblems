#pragma region Instructions
// 238. Product of Array Except Self

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 
#pragma endregion
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <map>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;
using std::unordered_map;
using std::multimap;
using std::make_pair;
using std::sort;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> out = vector<int>(size);
        
        out[0] = 1;
        // Prefix
        for(int i = 1; i < size; i++){
            out[i] = nums[i-1] * out[i-1];
        }

        int r = 1;
        // Postfix
        for(int i = size-1; i >= 0; i--){
            out[i] = out[i] * r;
            r = r * nums[i];
        }  

        return out;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};
 
    Solution s1;   
    vector<int> product = s1.productExceptSelf(nums);
    for(auto &out : product)
        cout << ' ' << out; 
}