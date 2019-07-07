//https://leetcode.com/problems/robot-return-to-origin/
//657. Robot Return to Origin
//657-Robot-Return-to-Origin.cpp

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;  //original (0,0)
        
        for(int i=0; i < moves.size(); ++i)
        {
            char action=moves[i];
            
            switch(action)
            {
                case 'U':
                    y --;
                    break;
                case 'D':
                    y ++;
                    break;
                case 'R':
                    x ++;
                    break;
                case 'L':
                    x --;
                    break;
            }            
        }
        
        if((x==0)&&(y==0))
            return true;
        
        return false;
        
    }
};