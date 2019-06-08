//https://leetcode.com/problems/palindrome-number/submissions/

class Solution {
public:
    bool isPalindrome(int x) {
       if (x < 0)
           return false;
        string input=to_string(x);
        
        for(int i = 0; i < 1+ (input.size()/2); i++) 
        {
            if(input[i]!=input[input.size()-i-1])
                return false;
        }        
        return true;
    }
};

