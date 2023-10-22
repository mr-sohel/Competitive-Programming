class Solution {
public:
	//Function to return list containing vertices in Topological order.

	void dfs(int node, vector<int> adj[], vector<bool> &vis, stack<int> &st) {
		vis[node] = true;
		for (auto adjNode : adj[node]) {
			if (vis[adjNode] == false) {
				dfs(adjNode, adj, vis, st);
			}
		}
		st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[])  {
		vector<bool> vis(V, false);
		stack<int> st;
		for (int i = 0; i < V; i++) {
			if (vis[i] == false) {
				dfs(i, adj, vis, st);
			}
		}
		vector<int> ans;
		while (!st.empty()) {
			ans.push_back(st.top());
			st.pop();
		}
		return ans;
	}
};