class Solution {
public:
	// Function to return a list containing the BFS traversal of the graph.
	vector<int> bfsOfGraph(int V, vector<int> adj[]) {
		vector<bool>vis(V, false);
		vector<int> path;
		queue<int> q;
		vis[0] = true; // visit and mark
		path.push_back(0);
		q.push(0); // starting from 0th vertex
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			for (auto adjNode : adj[node]) {
				if (vis[adjNode] == false) { // if not yet visited
					vis[adjNode] = true; // visit and mark
					path.push_back(adjNode);
					q.push(adjNode);
				}
			}
		}
		return path;
	}
};