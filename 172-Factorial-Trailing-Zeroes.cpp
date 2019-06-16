//172. Factorial Trailing Zeroes
//172-Factorial-Trailing-Zeroes.cpp
//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        
    // Initialize result 
    int count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (unsigned long long i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
    return count;
    }
};