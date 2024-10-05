#include <iostream>
using namespace std;

class Node{
  public:
  int data,height;
  Node* left;
  Node* right;
  
  Node(int value){
    data = value;
    height = 1;
    left = right = NULL;
  }
};

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

Node* insert(Node *root,int key){
  if(root == NULL){
    return new Node(key);
  }
  if(key<root->data){
    root->left = insert(root->left,key);
  }
  else if(key>root->data){
    root->right = insert(root->right,key);
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

void inorder(Node *root){
  if(root != NULL){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}

Node* deleteNode(Node* root,int key){
  if(!root){
    return NULL;
  }
  
  if(key<root->data){
    root->left = deleteNode(root->left,key);
  }
  else if(key>root->data){
    root->right = deleteNode(root->right,key);
  }
  else{
    if(!root->left && !root->right){
      delete root;
      return NULL;
    }
    else if(root->left && !root->right){
      Node* temp = root->left;
      delete root;
      return temp;
    }
    else if(root->right && !root->left){
      Node* temp = root->right;
      delete root;
      return temp;
    }
    else{
      Node *curr = root->right;
      
      while(curr->left){
        curr = curr->left;
      }
      root->data = curr->data;
      root->right = deleteNode(root->right,curr->data);
    }
  }
  
   root->height = 1+max(height(root->left),height(root->right));
   
   int balance = getBalance(root);
   
   if(balance>1){
     if(getBalance(root->left)>=0){
       return rightRotate(root);
     }
     else{
       root->left = leftRotate(root->left);
       return rightRotate(root);
     }
   }
   else if(balance<-1){
     if(getBalance(root->right)>=0){
       return leftRotate(root);
     }
     else{
       root->right = rightRotate(root->right);
       return leftRotate(root);
     }
   }
   else{
     return root;
   }
  
}

int main() 
{
    Node *root = nullptr;
    
    root = insert(root,10);
    root = insert(root,16);
    root = insert(root,24);
    root = insert(root,5);
    root = insert(root,9);
    
    cout<<"inorder after inserting data : ";
    inorder(root);
    
    cout<<endl<<"inorder after deleting data : ";
    root = deleteNode(root,16);
    inorder(root);
    
    
    return 0;
}
