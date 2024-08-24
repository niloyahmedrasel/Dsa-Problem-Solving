#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
        data = value;
        right = left = NULL;
    }
};

Node* binaryTree(){

    int x;
    cin>>x;

    if(x == -1){
        return NULL;
    }
    Node *temp = new Node(x);
    temp->left = create();
    temp->right = create();

    return temp;
}


int main()
{
    BinaryTree();

    return 0;
}
