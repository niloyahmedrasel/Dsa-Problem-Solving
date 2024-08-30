//https://geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if (!r1 && !r2) return true;  // Both trees are empty
        if (!r1 || !r2) return false; // One tree is empty and the other is not
        
        queue<Node*>q1;
        queue<Node*>q2;

        
        q1.push(r1);
        q2.push(r2);
        
        while(!q1.empty() && !q2.empty()){
            Node*current = q1.front();
            Node*current2 = q2.front();
            q1.pop();
            q2.pop();
            
            if(current->data != current2->data){
                return false;
            }
            
           
            
            if(current->left && current2->left){
                q1.push(current->left);
                q2.push(current2->left);
            }
            
            else if (current->left || current2->left) {
            // If one tree has a left child and the other doesn't
            return false;
            }
            
            if(current->right && current2->right){
                q1.push(current->right);
                q2.push(current2->right);
            }
            else if (current->right || current2->right) {
            // If one tree has a right child and the other doesn't
            return false;
        }
        }
            return true;
    }
};
