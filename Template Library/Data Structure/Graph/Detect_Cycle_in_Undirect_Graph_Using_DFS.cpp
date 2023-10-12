bool dfs(int src, int parent, vector<int> adj[], vector<bool> &vis) {
    vis[src] = true;
    for (auto it : adj[src]) {
        if (vis[it] == false) {
            if (dfs(it, src, adj, vis) == true) return true;
        } else if (it != parent) {
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