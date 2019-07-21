//https://leetcode.com/problems/power-of-three/
//326. Power of Three
//326-Power-of-Three.cpp

class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>1)
        {
            if(n%3 != 0) return false;
            else
                n=n/3;
        }
        if(n==1)
            return true;
        
        return false;        
    }

};