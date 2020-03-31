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
    
    bool recursively(TreeNode* tree1,TreeNode* tree2){
        if(tree1 == 0 && tree2 == 0) return true;
        if(tree1 == 0 || tree2 == 0) return false;
        int val1= tree1->val;
        int val2=tree2->val;
        return (val1 == val2) &&  recursively(tree1->left,tree2->right) &&  recursively(tree1->right,tree2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==0)
            return true;
        TreeNode* tree1 = root->right;
        TreeNode* tree2 = root->left;       
         if(tree1 == 0 && tree2 == 0) return true;
        if(tree1 == 0 || tree2 == 0) return false;
        int val1= tree1->val;
        int val2=tree2->val;
        return (val1 == val2) &&  recursively(tree1->left,tree2->right) &&  recursively(tree1->right,tree2->left);
    }
};
