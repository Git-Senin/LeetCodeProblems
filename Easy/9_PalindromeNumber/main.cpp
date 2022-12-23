#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {  
        
        // Reverts half + 1/half of Num to another variable then compares if equal to
        // If Num is odd, ignores middle num

        if (x < 0 || x % 10 == 0 && x != 0){    //  If Less than 0 OR last digit is 0 AND Num is not 0
            return false;
        }
        
        int revertedNumber = 0;     //  Variable for Reverted Num
        while(x > revertedNumber){  //  While Num is bigger than Reverted Num
            revertedNumber = revertedNumber * 10 + x % 10;  // Last digit of Num is appended to Reverted Num
            x /= 10;    // Remove Last digit of Num
        }

        return x == revertedNumber || x == revertedNumber/10;   //  Returns 
    }
};

int main(){
    
    int x = 12121;

    Solution palin;
    bool palindrome = palin.isPalindrome(x);
    std::cout << palindrome;

}