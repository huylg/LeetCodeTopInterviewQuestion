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
    
    bool recursive(TreeNode* node,int* lower ,int* upper){
        if(node==0)
            return true;
        int* val = &(node->val);
        if(lower!=0 && *lower>=*val) return false;
        if(upper!=0 && *upper<=*val) return false;
        
        
        return dequi(node->right,val,upper) && dequi(node->left,lower,val);
        
        
    }
    
    bool isValidBST(TreeNode* root) {
        return recursive(root,0,0);
        
    }
};
