//https://leetcode.com/problems/reverse-words-in-a-string/submissions/
//151. Reverse Words in a String
//151-Reverse-Words-in-a-String.cpp

class Solution {
public:
    string reverseWords(string s) 
    {  
        istringstream in(s);
        vector<string> arr;
        string result;
        string t;
        int i;
        while (in >> t) {
            arr.push_back(t);
        }
        if(arr.size()==0)
            return "";
    
        result=result+arr[arr.size()-1];
        
        if(arr.size() > 1)
        {
            for(i = arr.size()-2;i >= 0; i--)
                 result = result + " " +arr[i]; 
        }

        return result;
    }
};