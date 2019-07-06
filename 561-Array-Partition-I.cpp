//https://leetcode.com/problems/array-partition-i/submissions/
//561. Array Partition I
//561-Array-Partition-I.cpp

struct myclass {
    bool operator() (int i, int j) { return (i<j); }
} myobject;


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end(), myobject); 

        int total=0;
        for (int i=0; i< nums.size(); i+=2)
            total = total+ nums.at(i);

        return total;
        
    }
};

