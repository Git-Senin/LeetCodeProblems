#pragma region Instructions
// 26. Remove Duplicates from Sorted Array

//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

//Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

//Return k after placing the final result in the first k slots of nums.

//Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

// Constraints:

//1 <= nums.length <= 3 * 104
//-100 <= nums[i] <= 100
//nums is sorted in non-decreasing order.
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
    int removeDuplicates(vector<int>& nums)
    {
        int slow = !nums.empty(); // 0 on empty else 1
        for (auto &fast : nums) // itterate thru vector
        {
            if (fast > nums[slow - 1]) // itterate until found greater
            {
                nums[slow] = fast;     // replace current slow element with new greater num
                slow++;                // next slow element
            }
        }
        return slow;
    }
};

void printVector(vector<int>&v1)
{
    for (auto &i : v1)
         cout << i << ' ';
    cout << endl;
}

int main()
{
    vector<int> v1 = {0,0,0,0,0,1,1,1,2,2,3,3,4};
    printVector(v1);
    
    Solution s1;
    cout << "k = " << s1.removeDuplicates(v1);
    cout << endl;
    printVector(v1);
    
    return 1;
}

