class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        vector<bool>visited(V,0);
        q.push(0);
        visited[0]=1;
        vector<int> ans;
        int ele;
        while(!q.empty()) {
            ele = q.front();
            q.pop();
            ans.push_back(ele);
            for(int j=0;j<adj[ele].size();j++) {
                if(!visited[adj[ele][j]]) {
                    visited[adj[ele][j]]=1;
                    q.push(adj[ele][j]);
                }
            }
            
        }
        return ans;
    }
};
