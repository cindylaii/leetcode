//https://leetcode.com/problems/maximum-gap/
//164. Maximum Gap
//164-Maximum-Gap.cpp

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.size()<2)
            return 0;
        
        int maxGap=-1;
        
        sort(nums.begin(), nums.end()); 
        for(int i=1; i < nums.size(); i++)
        {
            int gap=abs(nums[i]-nums[i-1]);
            if(gap > maxGap)
                maxGap=gap;
            
        }
        return maxGap;
        
        
    }
};