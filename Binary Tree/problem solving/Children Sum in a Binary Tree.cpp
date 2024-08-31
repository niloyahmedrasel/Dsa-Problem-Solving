//https://www.geeksforgeeks.org/problems/children-sum-parent/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=hildren-sum-parent
class Solution{
    public:
    bool sum(Node *root,bool &ans){
        if(!root){
            return true;
        }
        if (!root->left && !root->right) {
            return true;
        }
        
        int left = 0;
        int right = 0;
        
        if(root->left){
            left = root->left->data;
        }
        if(root->right){
            right = root->right->data;
        }
        
         if(left + right != root->data){
            ans = false;
        }
        
        sum(root->left,ans);
        sum(root->right,ans);
        return ans;
        
    }
    
    int isSumProperty(Node *root)
    {
     bool ans = true;
     sum(root,ans);
     return ans ? 1 : 0;
     
    }
};
