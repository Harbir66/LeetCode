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
    TreeNode* help(TreeNode* root,TreeNode* p,TreeNode* q){
        if(root==NULL) return NULL;
        if(root ==p || root == q) return root;
        TreeNode* left=help(root->left,p,q);
        TreeNode* right=help(root->right,p,q);
        if(left && right ) return root;
        
        return left?left:right;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return help(root,p,q);
    }
};