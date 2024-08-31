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
//pre order traversal itaretive approach
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        stack<Node*>s;
        s.push(root);
        vector<int>arr;
        
        while(!s.empty()){
            
            Node *temp = s.top();
            s.pop();
            arr.push_back(temp->data);
            if(temp->right){
                s.push(temp->right);
            }
            if(temp->left){
                s.push(temp->left);
            }
        }
            return arr;
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
//inorder traversal iterative approach
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        stack<Node*>s;
        stack<bool>visited;
        visited.push(0);
        vector<int>arr;
        
        s.push(root);
        
        while(!s.empty()){
            Node *temp = s.top();
            s.pop();
            bool flag = visited.top();
            visited.pop();
            
            if(flag==0){
                
                if(temp->right){
                    s.push(temp->right);
                    visited.push(0);
                }
                if(temp){
                    s.push(temp);
                    visited.push(1);
                }
                if(temp->left){
                    s.push(temp->left);
                    visited.push(0);
                }
            }
            else{
                arr.push_back(temp->data);
            }
        }
            return arr;
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
//post order traversal iterative approach
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        
        vector<int> arr;
        if (node == nullptr) return arr;

        stack<Node*> s1, s2;
        s1.push(node);
        
        while (!s1.empty()) {
            Node* curr = s1.top();
            s1.pop();
            s2.push(curr);
            
            if (curr->left) {
                s1.push(curr->left);
            }
            if (curr->right) {
                s1.push(curr->right);
            }
        }
        
        // Pop all elements from s2 and store in arr to get post-order
        while (!s2.empty()) {
            arr.push_back(s2.top()->data);
            s2.pop();
        }
        
        return arr;
    }
};

//level order traversal
//https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution
{
    public:
    vector<int> levelOrder(Node* root)
    {
        queue<Node*>q;
        vector<int>result;
        
        if(root == NULL){
            return result;
        }
        q.push(root);
        
        while(!q.empty()){
            Node *current = q.front();
            result.push_back(current->data);
            q.pop();
            
            if(current->left){
                q.push(current->left);
            }
            if(current->right){
                q.push(current->right);
            }
        }
            return result;
    }
};
