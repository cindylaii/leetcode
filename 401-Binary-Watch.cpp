//https://leetcode.com/problems/binary-watch/
//401. Binary Watch
//401-Binary-Watch.cpp

class Solution {
    
public:
    map<int, int> mp;
    vector<string> readBinaryWatch(int num) 
    {
        vector<string> result;
        for(int i=0; i< 60; i++)
        {
            string binary = std::bitset<8>(i).to_string(); //to binary
            
            int count=0;
            for(int j=0; j< binary.length(); j++)
            {
                if(binary[j]=='1')
                    count ++;
            }
            mp[i] = count; 
        }
        
        map<int, int>::iterator it;
        for(int i=0; i< 4; i++)
        {
            if( i > num )
                break;
            string oneResult, first;
            std::pair<int, int> range( 3, 7 );
            auto low = mp.lower_bound( 0 );
            auto upper = mp.upper_bound( 11 );
            
            for ( auto it = low; it != upper; ++it )
            {
                if(it->second == i)
                {
                    first.clear();
                    first += to_string(it->first);

                    vector<string> secondList;
                    secondList= findMinutes(num-i);

                    for (int i=0; i< secondList.size(); i++)
                    {
                        oneResult = first + secondList[i];
                        result.push_back(oneResult);
                    }
                }             
            }            
        }    
        return result;
    }
    
    
    vector<string> findMinutes(int num) 
    {
        vector<string> result; 
        map<int, int>::iterator it;
        string second;
        for (it = mp.begin(); it != mp.end(); ++it )
            if (it->second == num)
            {
                second = ":";
                string n= to_string(it->first);  
                if(n.size()==1)
                    n="0"+ n;
                second +=n;                
                result.push_back(second);
            } 
        return result;
    }
    
};


