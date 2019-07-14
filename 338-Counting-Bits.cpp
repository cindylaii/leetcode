//https://leetcode.com/problems/counting-bits/
//338. Counting Bits
//338-Counting-Bits.cpp

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> f(num+1);
        f[0]=0;
        int t=1;
        for (int i = 1; i <= num; i++)
        {
            if (i/2 >= t) t *= 2;
            f[i] = f[i-t] + 1;
        }
        return f;        
    }
};