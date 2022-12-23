#pragma region Instructions
//58. Length of Last Word
//Given a string s consisting of words and spaces, return the length of the last word in the string.
//A word is a maximal substring onsisting of non-space characters only.

//Constraints:

//1 <= s.length <= 104
//s consists of only English letters and spaces ' '.
//There will be at least one word in s.
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
    int lengthOfLastWord(string s)
    {
        int length = 0;                     // length
        int i = (int)s.size() - 1;          // end of string
        while (i >= 0 && s[i] == ' ' ) i--; // gets tail of last word
        while (i >= 0 && s[i] != ' ' ) {    // move up until end of word
            i--;
            length++;
        }
        return length;
    }
};

int main()
{
    Solution s1;
    cout << s1.lengthOfLastWord("   Word1 Word2 Word3   ");
    cout << endl;
    
    return 0;
}

