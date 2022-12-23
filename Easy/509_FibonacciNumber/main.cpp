#pragma region Instructions
//509. Fibonacci Number

//The Fibonacci numbers, commonly denoted F(n) form a sequence,
//called the Fibonacci sequence,
//such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

//F(0) = 0, F(1) = 1
//F(n) = F(n - 1) + F(n - 2), for n > 1.
//Given n, calculate F(n).

//The number of nodes in each linked list is in the range [1, 100].
//0 <= Node.val <= 9
//It is guaranteed that the list represents a number that does not have leading zeros.
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
class Solution {
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

int main(){
    Solution s1;
    cout << s1.fib(5);
    cout << endl;
    
    return 0;
}