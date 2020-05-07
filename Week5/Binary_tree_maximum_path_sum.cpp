/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    
    int ans;
    
public:
    
    int dfs(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int a= dfs(root->left);
        int b= dfs(root->right);
        ans= max(ans,root->val+a+b);
        return max(max(a,b)+root->val,0);
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        ans= INT_MIN;
        dfs(root);
        return ans;
        
        
        
        
    }
};