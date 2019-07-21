//https://leetcode.com/problems/add-digits/
//258. Add Digits
//258-Add-Digits.cpp

class Solution {
public:
    int addDigits(int num) 
    {
        
        while(num >= 10)
            num=calcDigit(num);
        
        return num;    
    }
    
    int calcDigit(int num)
    {
        int result=0;        
        while(num > 0)
        {
            result += (num%10);
            num=num/10;
        }
        return result;
    }
    
};


