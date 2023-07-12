// Question: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// T.C : O(V + E) Where, V = vertices and E = Edges
// S.C : O(V)

class Solution {
  private:
  void dfs(int start, vector<int> adj[], int visited[], vector<int> &ans){
      visited[start]=1;
      ans.push_back(start);
      for(auto i:adj[start] ){
          if(visited[i]==0){
              dfs(i, adj, visited, ans);
          }
      }
  }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int visited[V]={0};
        vector<int> ans;
        int start=0;
        dfs(start, adj, visited, ans);
        return ans;
    }
};
