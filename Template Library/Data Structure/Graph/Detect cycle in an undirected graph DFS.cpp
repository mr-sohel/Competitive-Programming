class solution {
public:
    bool dfs(int src, int parent, vector<int> adj[], vector<bool> &vis) {
        vis[src] = true;
        for (auto adjNode : adj[src]) {
            if (vis[adjNode] == false) {
                if (dfs(adjNode, src, adj, vis) == true) return true;
            } else if (adjNode != parent) { // If adjNode is already visited and its not the parent then its a cycle
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {

        vector<bool> vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (vis[i] == false) {
                if (dfs(i, -1, adj, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};