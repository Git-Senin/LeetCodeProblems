#pragma region Instructions
//1704. Determine if String Halves Are Alike

//You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
//Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
//Return true if a and b are alike. Otherwise, return false.

//Constraints:

//  2 <= s.length <= 1000
//  s.length is even.
//  s consists of uppercase and lowercase letters.
#pragma endregion

#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <array>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;

class Solution {
public:
    bool halvesAreAlike(string s)
    {
        vector<int>vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count = 1;
        for (int i = 0; i < s.size(); i++)
        {
            auto p = std::find(vowels.begin(), vowels.end(), s[i]); // find if vowel
            if (p != vowels.end())  // if vowel
                if (i < s.size()/2) // first half
                    count++;
                else                // second half
                    count--;
        }
        return count == 1 ? true : false;
    }
};

int main()
{
    Solution s1;
    if(s1.halvesAreAlike("Book"))
        cout << "True";
    else
        cout << "False";
    cout << endl;
    
    return 0;
}

