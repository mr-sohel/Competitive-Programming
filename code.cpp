#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using lll = __int128_t;
using ld = long double;
using ull = unsigned long long;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> adj[n + 1];
	for (int i = 1; i <= m; i++) {
		int u, v, cost;
		cin >> u >> v >> cost;
		adj[u].push_back({v, cost});
		adj[v].push_back({u, cost});
	}
	vector<ll> dist(n + 1, 1e12 + 1);
	vector<int> parent(n + 1, 0);
	parent[1] = 1;
	dist[1] = 0;
	minHeap<pair<ll, int>> pq;
	pq.push({0, 1});
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
	if (parent[n] == 0) cout << -1 << "\n";
	else {
		vector<int> path;
		int node = n;
		while (parent[node] != node) {
			path.push_back(node);
			node = parent[node];
		}
		path.push_back(1);
		reverse(all(path));
		for (auto it : path) {
			cout << it << ' ';
		}
		cout << "\n";
	}

}

int main() {
	unsyncIO;

	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}