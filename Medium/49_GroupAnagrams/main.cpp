#pragma region Instructions
// 49. Group Anagrams

// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Constraints:

// 1 <= strs.length <= 104
// 0 <= strs[i].length <= 100
// strs[i] consists of lowercase English letters.
#pragma endregion
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>
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
using std::sort;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> v1;
        unordered_map<string, vector<string>> mp;

        // itterate thru string
        for (auto &word : strs) 
        {
            // get key
            string str = word;
            sort(str.begin(), str.end());
            
            // push word into key
            mp[str].push_back(word);
        }

        // itterate thru map keys
        for (auto &v : mp)
            // push each vector into wrapping vector
            v1.push_back(v.second);

        return v1;
    }
};

int main()
{
    vector<string> v1 = {"eat","tea","tan","ate","nat","bat"};
    Solution s1;
    vector<vector<string>> v2 = s1.groupAnagrams(v1);
    for (auto &vec : v2) {
        for (auto &v : vec)
            cout << v << " ";
        cout << endl;
    }
}