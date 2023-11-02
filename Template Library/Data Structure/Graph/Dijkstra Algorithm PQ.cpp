class Solution
{
public:
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.
    template <typename T>
    using minHeap = priority_queue<T, vector<T>, greater<T>>;
    void dijkstra(int n, int s) {
        vector<ll> dist(n + 1, 1e12);
        vector<int> parent(n + 1, 0);
        parent[s] = 1;
        dist[s] = 0;
        minHeap<pair<ll, int>> pq;
        pq.push({0, s});
        while (!pq.empty()) {
            ll dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if (dis > dist[node]) continue;
            for (auto it : adj[node]) {
                int adjNode = it.first;
                ll edW = it.second;
                if ((ll)dis + edW < dist[adjNode]) {
                    dist[adjNode] = dis + edW;
                    parent[adjNode] = node;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
    }
};
