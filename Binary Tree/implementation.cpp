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

int main()
{
    int x;
    cout<<"enter the value of root "<<endl;
    cin>>x;

    queue<Node*>q;

    Node *root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node *current = q.front();
        q.pop();

        int first;
        cout<<"enter the value left Node of "<<current->data <<endl;
        cin>>first;

        if(first!=-1){
            current->left = new Node(first);
            q.push(current->left);
        }

        int second;
        cout<<"enter the value right Node of "<<current->data <<endl;
        cin>>second;

        if(second!=-1){
            current->right = new Node(second);
            q.push(current->right);
        }

    }

    return 0;
}
