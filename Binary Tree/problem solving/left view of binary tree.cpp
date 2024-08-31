//https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
vector<int> leftView(Node *root)
{
   queue<Node*>q;
   q.push(root);
   vector<int>arr;
   
   while(!q.empty()){
       int n = q.size();
       arr.push_back(q.front()->data);
       
        while(n--){
           Node *temp = q.front();
           q.pop();
           
           if(temp->left){
               q.push(temp->left);
           }
           if(temp->right){
               q.push(temp->right);
           }
    
       }
            
   }
        return arr;
}
