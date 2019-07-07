//https://leetcode.com/problems/compare-version-numbers/
//165. Compare Version Numbers
//165-Compare-Version-Numbers.cpp


class Solution {
public:
    int compareVersion(string version1, string version2) 
    {         
        
        std::vector<int> vect1, vect2;
        std::stringstream ss(version1);
        std::stringstream ss2(version2);
        int i;

        //1. vector 1
        while (ss >> i)
        {
            vect1.push_back(i);

            if (ss.peek() == '.')
                ss.ignore();
        }


        //2. vector 2
        while (ss2 >> i)
        {
            vect2.push_back(i);

            if (ss2.peek() == '.')
                ss2.ignore();
        }

        
        for (i=0; i< vect2.size(); i++)
            std::cout << vect2.at(i)<<" ";
        std::cout << std::endl;
        
        
        //3.compare
        if (vect1.size() < vect2.size())
        {
            int addZero=vect2.size()-vect1.size();
            for(i=0; i< addZero; i++)
            {
                vect1.push_back(0);
            }
        }
        else if (vect1.size() > vect2.size())
        {            
            int addZero=vect1.size()-vect2.size();
            for(i=0; i< addZero; i++)
            {
                vect2.push_back(0);
            }
        }
        
               
        for (i=0; i< vect1.size(); i++)
        {
            if(vect1[i] > vect2[i])
                return 1;
            else if(vect1[i] < vect2[i])
                return -1;                
        }

        
        return 0;
    }
};

