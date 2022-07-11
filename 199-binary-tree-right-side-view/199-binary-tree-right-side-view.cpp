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
    vector<int> solve(vector<int> res,TreeNode *root,int lvl){
        if(root == NULL){
            return res;
        }
        if(res.size()==lvl){
            res.push_back(root->val);
        }
        res= solve(res,root->right,lvl+1);
        res= solve(res,root->left,lvl+1);
        return res;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        res=solve(res,root,0);
        return res;
    }
};