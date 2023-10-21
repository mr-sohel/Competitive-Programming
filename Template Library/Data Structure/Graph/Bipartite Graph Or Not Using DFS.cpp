class Solution {
public:
	bool dfs(int node, int col, int V, vector<int> adj[], vector<int> &color) {
		color[node] = col;
		for (auto adjNode : adj[node]) {
			if (color[adjNode] == -1) {
				if (dfs(adjNode, !col, V, adj, color) == false) return false;
			} else {
				if (color[adjNode] == color[node]) {
					return false;
				}
			}
		}
		return true;
	}
	bool isBipartite(int V, vector<int>adj[]) {
		vector<int> color(V, -1);
		for (int i = 0; i < V; i++) {
			if (color[i] == -1) {
				if (dfs(i, 0, V, adj, color) == false) return false;
			}
		}
		return true;
	}
};