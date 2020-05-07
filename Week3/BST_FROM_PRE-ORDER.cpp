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
    
    
    TreeNode *getnewnode(int val)
    {
        TreeNode *newnode = new TreeNode;
        newnode->val=val;
        newnode->left= newnode->right=NULL;
        return newnode;
        
    }
    
    
public:
    
    int solve(vector<int>preorder,int n, int pos,TreeNode*curr,int left,int right)
    {
        if(pos==n || preorder[pos]<left || preorder[pos]>right )
            return pos;
        
        if(preorder[pos]< curr->val)
        {
            curr->left= getnewnode(preorder[pos]);
            pos+=1;
            pos=solve(preorder,n,pos,curr->left,left,curr->val-1);
        }
        
       // if(pos==n || preorder[pos]<left || preorder[pos]>right)
           // return pos;
        
        curr->right=getnewnode(preorder[pos]);
        pos+=1;
        pos=solve(preorder,n,pos,curr->right,curr->val+1,right);
        return pos;
        
        
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        const int n=preorder.size();
        
        if(n==0)
            return NULL;
        TreeNode *root= getnewnode(preorder[0]);
        if(n==1)
            return root;
        
        solve(preorder,n,1,root,INT_MIN,INT_MAX);
        return root;
        
    }
};