#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int x = 0; x < n-1; x++){
            for(int y = 0; y < n; y++){
                if(nums[x] + nums[y] == target && x != y){
                    return {x,y};
                }
            }
        }
    return {};
    }
};

int main(){
    vector<int> list{2,7,9,11,15}; 
    int list_target = 9;
    
    vector<int> out = Solution(list, list_target);
    
    cout <<  out[0] << " and "<< out[1] << " make " << list_target << endl;
}
