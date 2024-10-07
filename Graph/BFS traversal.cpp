//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?page=1&difficulty%5B%5D=0&category%5B%5D=Graph&sortBy=submissions

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        vector<bool>visited(V,0);
        
        vector<int>ans;
        visited.push_back(0);
        visited[0] = 1;
        q.push(0);
        
        while(!q.empty()){
            int node;
            node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(int i = 0;i<adj[node].size();i++){
                if(!visited[adj[node][i]]){
                    visited[adj[node][i]] = 1;
                    q.push(adj[node][i]);
                }
            }
        }
            return ans;
    }
};
