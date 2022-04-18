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
    TreeNode* inorder(TreeNode* root,int &k,int &val){
        if(root==NULL || k==0) return NULL;
        inorder(root->left,k,val);
        if(k==1)
            val=root->val;
        k--;
        return inorder(root->right,k,val);
    }
    int kthSmallest(TreeNode* root, int k) {
        int res=0;
        
        inorder(root,k,res);
        return res;
    }
};