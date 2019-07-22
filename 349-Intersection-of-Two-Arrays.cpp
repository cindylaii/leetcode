//https://leetcode.com/problems/intersection-of-two-arrays/
//349. Intersection of Two Arrays
//349-Intersection-of-Two-Arrays.cpp

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> first{begin(nums1), end(nums1)};
        set<int> out;
        
        for (auto i: nums2)
        {
            if(first.find(i) != first.end())
                out.insert(i);                
        }
        
        vector<int> result(out.begin(), out.end());        
        return result;
        
    }
};
