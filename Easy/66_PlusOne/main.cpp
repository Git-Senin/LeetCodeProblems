#pragma region Instructions
//66. Plus One
//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//Increment the large integer by one and return the resulting array of digits.

//Constraints:

//1 <= digits.length <= 100
//0 <= digits[i] <= 9
//digits does not contain any leading 0's.
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
    vector<int> plusOne(vector<int>& digits) {
        digits.back()++;
        for (auto it = digits.rbegin(); it != digits.rend(); it++)
        {
            if (*it != 10)
            {
                return digits; // if no overflow return
            }
            else
            {
                *it = 0;       // set overflow to 0
                if (it != digits.rend() - 1) // not leading number
                {
                    (*(it + 1))++;    // increase number infront
                }
                else        // is leading number
                {
                    digits.emplace(digits.begin(), 1);  // add element infront of vector
                    return digits;  // return
                }
            }
        }
        return digits;
    }
};

int main()
{
    vector<int>v1 = {9};
    Solution s1;
    s1.plusOne(v1);
    for (auto& val : v1)
        cout << val << ' ';
    cout << endl;
    
    return 0;
}

