//https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?page=1&difficulty%5B%5D=0&category%5B%5D=Binary%2520Search%2520Tree&sortBy=submissions
class Solution
{
    public:
        Node* insertion(Node *node,int data){
           if(!node){
               Node *temp = new Node(data);
               return temp;
           }
           if(node->data == data){
               return node;
           }
           
           if(data>node->data){
               node->right = insert(node->right,data);
           } else{
               node->left = insert(node->left,data);
           }
           return node;
        }
        
        Node* insert(Node* node, int data) {
        
            node = insertion(node,data);
            return node;
    }

};
