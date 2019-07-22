//https://leetcode.com/problems/reverse-string/
//344. Reverse String
//344-Reverse-String.cpp


class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=s.size()-1; i >= 0 ; i--)
            s.push_back(s[i]);
        
        s.erase(s.begin(), s.begin() + s.size()/2);
    }
};