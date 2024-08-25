//https://www.geeksforgeeks.org/problems/size-of-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
    int getSize(Node* node) {
        queue<Node*>q;
        int count = 0;
        
        q.push(node);
        
        while(!q.empty()){
            Node *current = q.front();
            q.pop();
            count++;
            
            if(current->left){
                q.push(current->left);
            }
            if(current->right){
                q.push(current->right);
            }
        }
        
            return count;
        
    }
};
