#pragma region Instructions
//  217. Contains Duplicate
//  Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

//  Constraints:
//      1 <= nums.length <= 105
//      -109 <= nums[i] <= 109
#pragma endregion
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <vector>
#include <array>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;
using std::unordered_map;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp; // map
        for(auto &val : nums)   // loop thru vecotr
        {
            if (mp.find(val) == mp.end()) { // if map doesn't contain
                mp.insert({val, 0});        // add to seen
            }
            else {                          // if contains
                return true;                // contains duplicate
            }
        }
        return false;                       // no duplicates
    }
};

int main(){
    vector<int> v1 = {1,1,1,3,3,4,3,2,4,2};
    Solution s1;
    cout << s1.containsDuplicate(v1);
    return 0;
}