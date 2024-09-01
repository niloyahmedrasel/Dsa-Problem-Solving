//https://leetcode.com/problems/search-in-a-binary-search-tree/description/
class Solution {
public:
    TreeNode* find(TreeNode* root, int &val){
        if(!root){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        if(val <root->val){
            return find(root->left,val);
        }
        else{
            return find(root->right,val);
        }
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        root = find(root,val);
        return root;
    }
};
