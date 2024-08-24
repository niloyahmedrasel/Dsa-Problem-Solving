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

//pre order traversal
//https://leetcode.com/problems/binary-tree-preorder-traversal/
class Solution {
public:
    void helper(TreeNode* root,vector<int>&result){
        if(root == nullptr){
            return;
        }
        result.push_back(root->val);
        helper(root->left,result);
        helper(root->right,result);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        helper(root,result);
        return result;
    }
};
//in order traversal
//https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {
public:
    void helper(TreeNode* root,vector<int>&result){
        if(root == nullptr){
            return;
        }
        helper(root->left,result);
        result.push_back(root->val);
        helper(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        helper(root,result);
        return result;
    }
};

//post order traversal
//https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/1367108441/
class Solution {
public:
    void helper(TreeNode* root,vector<int>&result){
        if(root == nullptr){
            return;
        }
        helper(root->left,result);
        helper(root->right,result);
        result.push_back(root->val);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        helper(root,result);
        return result;
    }
};
