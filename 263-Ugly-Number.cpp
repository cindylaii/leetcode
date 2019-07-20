//https://leetcode.com/problems/ugly-number/
//263. Ugly Number
//263-Ugly-Number.cpp

class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        if (num == 1) return true;
        
        if (num % 2 == 0) {
            if (isUgly(num / 2)) return true;
        }
        
        if (num % 3 == 0) {
            if (isUgly(num / 3)) return true;
        }
        
        if (num % 5 == 0) {
            if(isUgly(num / 5)) return true;
        }
        
        return false;
        
    }
};