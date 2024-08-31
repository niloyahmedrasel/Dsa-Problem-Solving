//https://www.geeksforgeeks.org/problems/check-if-two-nodes-are-cousins/1?page=2&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
bool parent(Node *root,int a,int b){
    if(!root){
        return 0;
    }
    if(root->left && root->right){
        if(root->left->data == a && root->right->data == b){
            return 1;
        }
        if(root->left->data == b && root->right->data == a){
            return 1;
        }
    }
    return parent(root->left,a,b) || parent(root->right,a,b);
}

bool isCousins(Node *root, int a, int b) {
    
    queue<Node*>q;
    q.push(root);
    
    int l1 = -1;
    int l2 = -1;
    
    int level = 0;
    
    while(!q.empty()){
        int n = q.size();
        
        while(n--){
            Node *temp = q.front();
            q.pop();
            if(temp->data == a){
                l1 = level;
            }
            if(temp->data == b){
                l2 = level;
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
        level++;
        if(l1 != l2){
            return 0;
        }
        if(l1 !=-1 && l2 !=-1){
            break;
        }
    }
    
         if (l1 == l2 && l1 != -1) {
            return !parent(root, a, b);
        }

        return false;
}
