//https://geeksforgeeks.org/problems/mirror-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
       if(!node){
           return;
       }
       
       Node *temp = node->right;
       node->right = node->left;
       node->left = temp;
       
       mirror(node->left);
       mirror(node->right);
    }
};
