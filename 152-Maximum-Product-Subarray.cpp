//https://leetcode.com/problems/maximum-product-subarray/
//152. Maximum Product Subarray
//152-Maximum-Product-Subarray.cpp

class Solution {
public:
    int maxProduct(vector<int>& nums) {   
        if(nums.size()==1)
            return nums[0];
        
        int max=0, result=0;        
        for(int j=0; j< nums.size();j++)
        {   
            result=nums[j];
            if(result > max)
                max=result;
            if(nums.size() > 1)
                for(int i=j+1; i< nums.size();i++)
                {
                    result=result*nums[i];
                    if(result > max)
                        max=result;
                }
        }
        return max;
    }
};