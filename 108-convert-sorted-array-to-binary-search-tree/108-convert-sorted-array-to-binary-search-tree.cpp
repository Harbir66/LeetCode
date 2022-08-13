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
    TreeNode* help(int l,int r,vector<int>& nums){
        if(l>r) return NULL;
        int m=l+(r-l)/2;
        TreeNode *root=new TreeNode(nums[m]);
        root->left=help(l,m-1,nums);
        root->right=help(m+1,r,nums);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid=nums.size()/2;
        TreeNode *root=NULL;
        root=help(0,nums.size()-1,nums);
        return root;
    }
};