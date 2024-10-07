//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?page=1&difficulty%5B%5D=0&category%5B%5D=Graph&sortBy=submissions

class Solution {
  public:
  
  void DFS(int node,vector<int>adj[],vector<int>&ans,vector<bool>&visited){
      visited[node] = 1;
      ans.push_back(node);
      
      for(int i =0 ;i<adj[node].size();i++){
          if(!visited[adj[node][i]]){
              DFS(adj[node][i],adj,ans,visited);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,0);
        vector<int>ans;
        
        DFS(0,adj,ans,visited);
         
        return ans;
        
    }
};
