#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        // Unordered Map     RomanNum to get Int
        unordered_map<char, int> map = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        // start with back element
        int solu = map[s.back()];
        
        
        // iterate thru string
        for(int i = 0; i < s.size() - 1; i++){
            
            if(map[ s[i] ] < map[ s[i + 1] ]) // if next element is bigger than current element, subtract element
                solu -= map[ s[i] ];
                
		    else    // if next element is smaller than current element, add element
                solu += map[s[i]];
                
        }
    
        return solu; // return int variable
    }
    
};