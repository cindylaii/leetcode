//https://leetcode.com/problems/number-of-1-bits/submissions/
//191. Number of 1 Bits
//191-Number-of-1-Bits.cpp

class Solution {
public:
    int hammingWeight(uint32_t n) {

        std::string s = std::bitset<32>( n ).to_string();

        n=0;
        for(auto i: s)
        {
            if(i=='1')
                n++;
        }
        cout << "n: " << n;
        return n;
    }
};