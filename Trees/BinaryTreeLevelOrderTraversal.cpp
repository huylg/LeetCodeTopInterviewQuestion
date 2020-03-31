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
    
    void recursively(TreeNode* root, vector<vector<int>>& vectors,int index)
    {
        if(root==0)
            return;
        int size = vectors.size();
        if(size==index){
            
            vector<int> vector;
            vectors.push_back(vector);
        }
        vectors[index].push_back(root->val);
        recursively(root->left,vectors,index+1);
        recursively(root->right,vectors,index+1);

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        recursively(root,result,0);
        
        return result;
    }
};
