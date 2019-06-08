//4. Median of Two Sorted Arrays
//4-Median-of-Two-Sorted-Arrays.cpp

//https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        //1. Merge
        vector<int> newArray = nums1;
        newArray.insert(newArray.end(), nums2.begin(), nums2.end());           
        
        
        double result=0.0;
        if(newArray.size()==2)
        {
            result= (double) 0.5* (newArray[0]+newArray[1]);
        }
        else if(newArray.size()==1)
        {
            result= (double) newArray[0];
        }
        
        //2. Sort
        sort(newArray.begin(), newArray.end());      

        //3. Median
        if(newArray.size()%2 == 0)  //even. If size is 3, median is 0.5*(newArray[2]+newArray[3])
        {

            result= (double) 0.5* (newArray[newArray.size()/2-1]+newArray[newArray.size()/2]);
        }
        else            //odd, if size is 5, median is 5/2=2
        {
            result= (double) newArray[newArray.size()/2];
        }

        return result;
    }
};
