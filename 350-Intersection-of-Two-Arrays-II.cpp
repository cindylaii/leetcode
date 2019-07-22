//https://leetcode.com/problems/intersection-of-two-arrays-ii/
//350. Intersection of Two Arrays II
//350-Intersection-of-Two-Arrays-II.cpp


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {     
        vector<int> res;

        if(nums1.size()==0 || nums2.size()==0)
            return res;

        unordered_map<int,int> mp;

        for(const int &c:nums1){
            mp[c]++;
        }
        
        for(const int &d:nums2){
            if(mp[d]!=0){
                res.push_back(d);
                mp[d]--;
            }
        }
        
        return res;
    }
};



