//https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        
  queue<Node*>q;
  int count = 0;
  
  q.push(root);
  
  while(!q.empty()){
      Node*current = q.front();
      if(current->left != NULL || current->right != NULL){
          count++;
      }
      q.pop();
      
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
