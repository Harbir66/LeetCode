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
public:
    void helper(vector<vector<int>>& res,TreeNode* root,int lvl){
        if(root==NULL) return;
        if(lvl==res.size()){
            vector<int> temp;
            temp.push_back(root->val);
            res.push_back(temp);
        }
        else{
            res[lvl].push_back(root->val);
        }
        helper(res,root->left,lvl+1);
        helper(res,root->right,lvl+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        helper(res,root,0);
        return res;
    }
};