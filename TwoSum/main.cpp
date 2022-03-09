#include <iostream>
#include <vector>

using namespace std;

vector<int> Solution(vector<int> &vect2, int target){
    int n = vect2.size();
    for(int x = 0; x < n-1; x++){
        for(int y = 1; y < n ;y++){
            if(vect2[x] + vect2[y] == target && x != y){
                return {vect2[x],vect2[y]};
            }
        }
    }
    return {};
}

int main(){
    vector<int> list{2,7,9,11,15}; 
    int list_target = 9;
    vector<int> out = Solution(list, list_target);
    cout <<  out[0] << " and "<< out[1] << " make " << list_target << endl;
}