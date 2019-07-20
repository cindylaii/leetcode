//https://leetcode.com/problems/single-number-iii/
//260. Single Number III
//260-Single Number-III.cpp

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        std::multiset<int> s(nums.begin(), nums.end());
        vector<int> out;
        for (auto const i: nums)
        {
            if(s.count(i)==1)
                out.push_back(i);
            
            if(out.size()==2)
                return out;             
        }
        return out;
    }
};

