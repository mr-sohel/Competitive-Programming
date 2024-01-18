class Solution {
public:
	//Function to return list containing vertices in Topological order.
	vector<int> topoSort(int V, vector<int> adj[])  {
		int inDegree[V] = {0};
		for (int i = 0; i < V; i++) {
			for (int it : adj[i]) {
				inDegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (inDegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> order;
		while (!q.empty()) {
			int x = q.front();
			order.push_back(x);
			q.pop();
			for (auto adjNode : adj[x]) {
				inDegree[adjNode]--;
				if (inDegree[adjNode] == 0) {
					q.push(adjNode);
				}
			}
		}
		return order;
	}
};