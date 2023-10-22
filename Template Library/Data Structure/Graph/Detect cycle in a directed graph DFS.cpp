class Solution {
public:
	// Function to detect cycle in a directed graph.
	bool dfs(int node, vector<int> adj[], vector<bool> &vis, vector<bool> &path) {
		vis[node] = true;
		path[node] = true;
		for (auto adjNode : adj[node]) {
			if (vis[adjNode] == false) {
				if (dfs(adjNode, adj, vis, path) == true) return true;
			} else if (path[adjNode] == true) {
				return true;
			}
		}
		path[node] = false;
		return false;
	}
	bool isCyclic(int V, vector<int> adj[]) {
		vector<bool> vis(V, false);
		vector<bool> path(V, false);
		for (int i = 0; i < V; i++) {
			if (vis[i] == false) {
				if (dfs(i, adj, vis, path) == true) return true;
			}
		}
		return false;
	}
};