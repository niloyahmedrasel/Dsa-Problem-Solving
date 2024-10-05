//https://www.geeksforgeeks.org/problems/avl-tree-insertion/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
  public:
  int height(Node* root){
  if(root == NULL){
    return 0;
  }
  
  return root->height;
}

int getBalance(Node* root){
  if(root == NULL){
    return 0;
  }
  
  return height(root->left) - height(root->right);
}

Node* rightRotate(Node* root){
  Node *child = root->left;
  Node *rightChild = child->right;
  
  child->right = root;
  root->left = rightChild;
  
  root->height = 1+max(height(root->left),height(root->right));
  child->height = 1+max(height(child->left),height(child->right));
  
  return child;
}

Node* leftRotate(Node *root){
  Node* child = root->right;
  Node * leftChild = child->left;
  
  child->left = root;
  root->right = leftChild;
  
  root->height = 1+max(height(root->left),height(root->right));
  child->height = 1+max(height(child->left),height(child->right));
  
  return child;
  
}

  Node* insertToAVL(Node* root, int key)
    {
       if(root == NULL){
      return new Node(key);
  }
  if(key<root->data){
    root->left = insertToAVL(root->left,key);
  }
  else if(key>root->data){
    root->right = insertToAVL(root->right,key);
  }
  else{
    return root;
  }
  
  root->height = 1+max(height(root->left),height(root->right));
  
  int balance = getBalance(root);
  
  if(balance>1 && key<root->left->data){
    return rightRotate(root);
  }
  else if(balance<-1 && key>root->right->data){
    return leftRotate(root);
  }
  else if(balance>1 && key>root->left->data){
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }
  else if(balance<-1 && key<root->right->data){
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }
  else{
    return root;
  }
  
  return root;
  
    }
};
