class Solution
{
public:
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.
    template <typename T>
    using minHeap = priority_queue<T, vector<T>, greater<T>>;
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        vector<int> dist(V, 1e9);
        dist[S] = 0;
        minHeap<pair<int, int>> pq;
        pq.push({S, 0});
        while (!pq.empty()) {
            int node = pq.top().first;
            pq.pop();
            for (auto it : adj[node]) {
                int adjNode = it[0];
                int WT = it[1];
                if (dist[node] + WT < dist[adjNode]) {
                    dist[adjNode] = dist[node] + WT;
                    pq.push({adjNode, WT});
                }
            }
        }
        return dist;
    }
};
