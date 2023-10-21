class Solution {
public:
    bool detectCycle(int src, vector<int> adj[], vector<bool> &vis) {
        vis[src] = true;
        queue<pair<int, int>> q;
        q.push({src, -1});
        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (auto adjNode : adj[node]) {
                if (vis[adjNode] == false) {
                    vis[adjNode] = true;
                    q.push({adjNode, node});
                } else if (adjNode != parent) { // If adjNode is already visited and its not the parent then its a cycle
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (vis[i] == false) {
                if (detectCycle(i, adj, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};