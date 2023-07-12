// Question : https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// T.C : O(V + E) for a directed graph. I case of undirected graph O(V) + O(2 x E)
// S.C : O(V)

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> q;
        q.push(0);
        int arr[V]={0};
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int val=q.front();
                ans.push_back(val);
                q.pop();
                for(auto its:adj[val]){
                    if(!arr[its]) {
                        arr[its]=1;
                        q.push(its);
                    }
                }
            }
        }
        return ans;
    }
