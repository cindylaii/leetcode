

//https://leetcode.com/problems/reverse-integer/submissions/

class Solution {
public:
    int reverse(int z) {
        
        if((z>=-9)&&(z<=9))
            return z;
        vector<int> numberArray;
        
        bool isMinus=false;
        long long x=z;
        if(x<0)
        {
            x=-x;
            isMinus=true;
        }
        
        while(x>0)  //For example 123
        {
            int y= x%10;   //y=3
            numberArray.push_back(y);
            x=x/10;        //x=12     
        }
        
        //numberArray is 3 2 1
        long long result=0;
        result= result + numberArray.back();
        int power=1;

        for(int i=numberArray.size()-2; i>=0; i--)
        {
            result = result+ numberArray[i]*pow(10, power);
            power++;
        }

        if(result > (pow(2,31)-1))
            return 0;

        if(result < (-pow(2,31)))
            return 0;


        return (isMinus)?(-result):result;
        
    }
};