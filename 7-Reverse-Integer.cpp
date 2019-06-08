

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
            cout << "x%10: "<< x%10 << endl;
            numberArray.push_back(y);
            x=x/10;        //x=12     
        }
        printf("\n");
        
        cout << "result: ";
        for(int i=0; i<numberArray.size(); ++i)
        {
            cout << numberArray.at(i) << " ";
        }
        cout <<endl;
        
        printf("pow(10, 0)=%d\n", pow(10, 0));
        
        //numberArray is 3 2 1
        long long result=0;
        result= result + numberArray.back();
        int power=1;
        cout << "result= "<< result;
        for(int i=numberArray.size()-2; i>=0; i--)
        {
            result = result+ numberArray[i]*pow(10, power);
            cout << "result= "<< result;
            power++;
        }

        if(result > (pow(2,31)-1))
            return 0;

        if(result < (-pow(2,31)))
            return 0;

        
        cout << "answer is " << result <<endl;

        return (isMinus)?(-result):result;
        
    }
};