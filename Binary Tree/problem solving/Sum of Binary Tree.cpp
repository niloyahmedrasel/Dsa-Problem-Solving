//https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    queue<Node*>q;
    long int sum = 0;
    
    q.push(root);
    
    while(!q.empty()){
        Node*current = q.front();
        sum = sum +current->key;
        
        q.pop();
        
        if(current->left){
            q.push(current->left);
        }
        if(current->right){
            q.push(current->right);
        }
        
    }
    return sum;
}
