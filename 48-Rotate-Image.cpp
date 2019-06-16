//48. Rotate Image
//48-Rotate-Image.cpp
//https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
       int size = matrix.size();
       vector<vector<int>> m;
       for(int i=0; i < size; ++i)
       {
           vector<int> array(size);                 
           m.push_back(array);           
       }
       
       for(int x=0; x< size; x++)
       {
           for(int y=0; y< size; y++)
           {
                m[x][y]=matrix[size-y-1][x];
           }
       }
        
       matrix=m; 
              
        
    }
};

