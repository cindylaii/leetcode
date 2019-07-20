//https://leetcode.com/problems/move-zeroes/
//283. Move Zeroes
//283-Move-Zeroes.cpp

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> newNums;
        int zeroCount=0;
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==0)            
                zeroCount++;
            else
                newNums.push_back(nums[i]);
        }
        
        for(int i=0; i< zeroCount ; i++)
            newNums.push_back(0);            
        
        nums=newNums;        
    }
      
    
};