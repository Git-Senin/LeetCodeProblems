#pragma region Instructions
// 347. Top K Frequent Elements

// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Constraints:

// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104
// k is in the range [1, the number of unique elements in the array].
// It is guaranteed that the answer is unique.
 
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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> v;

        unordered_map<int, int> mp;
        // frequency
        for (auto &i : nums) 
            mp[i]++;

        // reverse and sort map
        // *multimap allows key duplicates
        multimap<int, int> mp2;
        for (auto &i : mp)
            mp2.insert(make_pair(i.second, i.first));

        // reverse itterate and push values into vector
        for (auto it = mp2.rbegin(); it != mp2.rend(); it++) 
        {
            v.push_back(it->second);
            k--;
            if (k == 0) 
                return v;
        }
        return v;
    }
};

int main()
{
    vector<int> nums = {7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9};
    int k = 4;
 
    Solution s1;   
    s1.topKFrequent(nums, k);
}