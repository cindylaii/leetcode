//https://leetcode.com/problems/missing-number/
//268. Missing Number
//268-MissingNumber.cpp


class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        
        std::set<int> myset;

        for (int i=0; i <nums.size(); i++) 
             myset.insert(nums[i]); 

        for (int i=0; i <= nums.size()+1; i++) 
            if (!myset.count(i))
                return i;

        return 0;
    }
};