//https://leetcode.com/problems/binary-tree-paths/
//257. Binary Tree Paths
//257-Binary-Tree-Paths.cpp

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<string> ls;
    
public:
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        path(root, "");
        //cout << ls[0];
            return ls;    
    }
    
    void path(TreeNode* root,string s)
    {
    
        if(root==nullptr)
            return;


        s.append(to_string(root->val));
        s.append("->");

        if(root->left==nullptr && root->right==nullptr)
        {

            s=s.substr(0, s.size()-2);
            ls.push_back(s);  //to the leaf
            cout << s << endl;
            return;
        }

        path(root->left,s);
        path(root->right,s);
    
    }   

};

