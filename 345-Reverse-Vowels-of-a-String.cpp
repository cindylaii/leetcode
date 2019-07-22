//https://leetcode.com/problems/reverse-vowels-of-a-string/
//345. Reverse Vowels of a String
//345-Reverse-Vowels-of-a-String.cpp

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> c;
        string vowels = "aeiouAEIOU";
        for(int i=0; i<s.size(); i++)
        {
            if (vowels.find(s[i]) != string::npos)
                c.push_back(s[i]);
        }
        
        int count=0;
        for(int i= s.size()-1; i >= 0; i--)
        {            
            if (vowels.find(s[i]) != string::npos)
            {
                s[i]=c[count];
                count ++;
            }      
        }
        
        return s;
    }
};

