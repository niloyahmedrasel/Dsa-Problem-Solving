#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *right;
  Node *left;
  
  Node(int value){
    data = value;
    right = NULL;
    left = NULL;
  }
};

Node* insert(Node* root,int target){
if(!root){
  Node *temp = new Node(target);
  return temp;
}

if(target>root->data){
  root->right = insert(root->right,target);
}
else{
  root->left = insert(root->left,target);
}

return root;
}

void inorder(Node *root){
  if(!root){
    return ;
  }
  inorder(root->left);
  cout<<root->data <<" ";
  inorder(root->right);
}

int main() 
{
    int arr[5] = {1,23,4,53,2};
    
    Node *root = NULL;
    
    for(int i = 0;i<5;i++){
      root = insert(root,arr[i]);
    }
    
    inorder(root);
    return 0;
}
