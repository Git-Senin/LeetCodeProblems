#pragma region Instructions
// 14. Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.
#pragma endregion

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        
        int count = 0;                  // Amount of matching prefix characters 
        int minLen = strs[0].length();  // Get minLen | length of smallest word 
        string minStr = strs[0];        // Get minStr | smallest word

        // Finds smallest word
        for (size_t i = 1; i < strs.size(); i++)    // itterate through vector
        {
            if (strs[i].length() < minLen)  // if word smaller than first word
            {
                minLen = strs[i].length();  // assign new word length
                minStr = strs[i];           // assign new word length
            }
        }
        //  Loop through (minLen) characters
        for (size_t i = 0; i < minLen; i++) 
        {    
            //  Loop through size of vector              
            for (size_t j = 0; j < strs.size(); j++) 
            {    
                //  if curent not matching          
                if (strs[j][i] != minStr[i]) 
                {         
                    //  return current substr using current count
                    return minStr.substr(0, count);       
                }
            }
            // increase count if
            count++;
        }

        // return substr using count
        return minStr.substr(0, count); 
    }
};

int main()
{
    vector<string> strs = {"do","dog","dash"};
    Solution s;

    string x = s.longestCommonPrefix(strs);
    std::cout << x;
    
    return 0;
}
