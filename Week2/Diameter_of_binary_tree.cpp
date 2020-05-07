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
public:
    
    int solve(TreeNode* root,int &ans)
    {
        if(root==NULL)
            return 0;
        int l_height= solve(root->left,ans);
        int r_height= solve(root->right,ans);
        
        //This will count only the edges.
        //if path is said to be as long as the nodes in it then
        // ans= max(ans,l_height+r_height+1);
        ans= max(ans,l_height+r_height);
        
        return  1+max(l_height,r_height);
    }
  
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans=-1e4;
        int h=solve(root,ans);
        if(h==0)
            return 0;
        return ans;
      
        
        
    }
};