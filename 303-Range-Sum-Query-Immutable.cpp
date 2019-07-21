//https://leetcode.com/problems/range-sum-query-immutable/
//303. Range Sum Query - Immutable
//303-Range-Sum-Query-Immutable.cpp


class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) 
    {
        sum.push_back(0);
		for (int i = 1; i < nums.size() + 1; i++)
			sum.push_back(sum[i - 1] + nums[i - 1]);
        
        for(int i=0; i< sum.size(); i++)
        {
            cout << sum[i] << " ";
        }
        
    }
    
    int sumRange(int i, int j) 
    {
     
        return sum[j + 1] - sum[i];

    }
};

