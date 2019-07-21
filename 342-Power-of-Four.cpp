//https://leetcode.com/problems/power-of-four/
//342. Power of Four
//342-Power-of-Four.cpp

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        while(n>1)
        {
            if(n%4 != 0) return false;
            else
                n=n/4;
        }
        if(n==1)
            return true;
        
        return false; 
        
    }
};