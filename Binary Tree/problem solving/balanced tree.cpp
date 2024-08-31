//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution{
    public:
    int height(Node *root,bool &valid){
        
        if(!root){
            return 0;
        }
        int l = height(root->left,valid);
        int r = height(root->right,valid);
        
        if(abs(l-r)>1){
            valid = 0;
        }
        return 1+max(l,r);
    }
   
    bool isBalanced(Node *root)
    {
       bool valid = 1;
       height(root,valid);
       return valid;
        
        
    }
};
