//189. Rotate Array
//189-Rotate-Array.cpp
//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(k==0)
            return;
        
        k=k % (nums.size());
        vector<int> array(nums.size());
        
        //copy remaining  
        for(int i=0; i<k; ++i )
            array[i]=nums[nums.size()-k+i];            
        
        //copy start
        for(int i=0; i<(nums.size()-k); ++i)
            array[i+k]=nums[i];
        
        nums=array;
    }
};