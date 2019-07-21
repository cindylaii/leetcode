//https://leetcode.com/problems/word-pattern/
//290. Word Pattern
//290-Word-Pattern.cpp

class Solution {
public:
    bool wordPattern(string pattern, string str) { 
                      
        //1. split string
        istringstream in(str);
        vector<string> v;
        string t;
        while (in >> t) {
            v.push_back(t);
            cout << t << " ";
        }
        
        if(pattern.size()!= v.size())
            return false;
        
        map<char, string> mymap; 
        map<char, string>::iterator it;
        
        for (int i = 0; i < pattern.size(); i++) 
        {
            char patternKey = pattern[i];
            it = mymap.find(patternKey);
            if (it == mymap.end())  //key is not existed
            {                
                //1. cannot have other value is the same
                for (it = mymap.begin(); it != mymap.end(); ++it )
                    if (it->second == v[i])
                        return false;
                
                //2. Add to map
                mymap[patternKey]=v[i];
            }
            else
            {
                if(mymap[patternKey].compare(v[i]) != 0)  //Not the same
                    return false;
            }
        
        }
        return true;            
    }
};

