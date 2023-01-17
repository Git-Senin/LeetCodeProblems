#pragma region Instructions
// 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.
 
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
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;
        
        unordered_map<char, int> mp;
        
        for (int i = 0; i < s.length(); i++) 
        {
            // increase/decrease frequency
            mp[s[i]]++; 
            mp[t[i]]--;
            
            // if Zero Frequency
            if (mp[s[i]] == 0) 
                mp.erase(s[i]);
            if (mp[t[i]] == 0)
                mp.erase(t[i]);
        } 

        return mp.empty();
    }
};

int main()
{
    string s = "ab";
    string t = "ba";
    Solution s1;
    cout << s1.isAnagram(s, t);
}