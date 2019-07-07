//https://leetcode.com/problems/plus-one/submissions/
//66. Plus One
//66-Plus-One.cpp

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry=0;
        //1. last emelent
        if(digits.back()==9)
        {
            carry=1;
            digits.back()=0;
        }
        else
            digits.back() ++;
         
        //2. other elements
        if(digits.size() >=2)
        {
            for(int i=digits.size()-2; i >= 0; i--)
            {            
                if(digits[i]+carry ==10)
                {
                    digits[i]=0;
                    carry=1;
                }
                else
                {
                    digits[i]= digits[i]+carry;
                    carry=0;
                }

            }
        }
        
        if(carry==1)
        {
            digits.insert(digits.begin(), 1);
        }   

        return digits;        
    }
};