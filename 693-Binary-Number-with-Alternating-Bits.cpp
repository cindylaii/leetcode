//693. Binary Number with Alternating Bits
//693-Binary-Number-with-Alternating-Bits.cpp
//https://leetcode.com/problems/binary-number-with-alternating-bits/

class Solution {
public:
    bool hasAlternatingBits(int n) 
    {   
        std::string binary = std::bitset<32>(n).to_string(); //to binary
        std::cout<<binary<<"\n";
        
        std::cout << "The size of str is " << binary.length() << " bytes.\n";
        
        //1. find first 1
        int index=0;
        for(int i=0; i<  binary.length(); i++)
        {
            if(binary.at(i)=='1')
            {
                index=i;
                break;
            }            
        }
        cout << "leadeing 1 is " << index;
        
        //2. 
        bool result=true;
        for(int i=index; i<  binary.length(); i=i+2)
        {            
            if(binary.at(i)=='0')
            {
                result=false;
                break;
            } 
        }
        
        
        for(int i=index+1; i<  binary.length(); i=i+2)
        {            
            if(binary.at(i)=='1')
            {
                result=false;
                break;
            } 
        }
        
        
        return result;
    }
};