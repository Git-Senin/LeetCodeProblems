#pragma region Instructions
// 20. Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.
#pragma endregion

#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    bool isValid(string s) {
        
        std::stack<char> st;
        std::unordered_map<char, char> mp = {{']','['},{'}','{'},{')','('}};

        st.push(s[0]);
        for (size_t i = 1; i < s.length(); i++) 
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else {
                if (!st.empty() && st.top() == mp[s[i]]) {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution s;
    cout << s.isValid("(){}}{");
    
    return 0;
}