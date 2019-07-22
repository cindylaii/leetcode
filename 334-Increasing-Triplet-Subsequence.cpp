//https://leetcode.com/problems/increasing-triplet-subsequence/
//334. Increasing Triplet Subsequence
//334-Increasing-Triplet-Subsequence.cpp


class Solution {
public:
bool increasingTriplet(vector<int>& nums) {
        int first_s = INT_MAX;
        int second_s = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < first_s)
                first_s = nums[i];
            else if(nums[i] > first_s && nums[i] < second_s)
                second_s = nums[i];
            else if(nums[i]>second_s)
                return true;
        }
        return false;
    }
};//