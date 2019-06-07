
//https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> myMap;
        
        for (int i=0; i< nums.size(); ++i)
        {
            myMap.insert(pair<int, int>(nums[i], i));
        }
        
        for (int i=0; i< nums.size(); ++i)
        {
            int another = target - nums[i];
            
            map<int,int>::iterator it = myMap.find(another);
            if (it != myMap.end())
            {
                if(i != it->second)
                {
                    vector<int> result={i, it->second};
                    return result;
                }
            }       
        }
        
        return vector<int> ();
    }
};


