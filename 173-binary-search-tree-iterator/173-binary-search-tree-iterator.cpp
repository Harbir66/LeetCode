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
class BSTIterator {
public:
    list<int> l;
    list<int> :: iterator itr;
    
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left);
        if(l.empty()){
            l.push_back(root->val -1);   
        }
        l.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
        itr=l.begin();
    }
    
    int next() {
        itr++;
        return *itr;
    }
    
    bool hasNext() {
        auto i=itr;
        i++;
        return i==l.end()?false:true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */