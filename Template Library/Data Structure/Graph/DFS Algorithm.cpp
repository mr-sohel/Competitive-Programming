class Solution {
public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], vector<bool> &vis, vector<int> &path) {
        vis[node] = true; // mark and visit
        path.push_back(node);
        for (auto adjNode : adj[node]) {
            if (vis[adjNode] == false) {
                dfs(adjNode, adj, vis, path); //if it is not yet visited call dfs;
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        vector<int> path;
        dfs(0, adj, vis, path); // starting from 0th vertex
        return path;
    }
};