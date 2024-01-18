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
int n;
int v[N];
bool check(int l, int r) {
	if (l == 1 or v[l - 1] > v[l]) {
		if (r == n or v[r + 1] > v[r])
			return true;
	}
	return false;
}

void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	int cnt = 0; // valid subarray counts
	int l = 1, r = 1;
	while (l <= n) {
		while (r <= n and v[l] == v[r + 1]) {
			r++;
		}
		cnt += check(l, r);
		l = r + 1;
	}
	if (n > 1 and v[n - 1] > v[n]) cnt++;
	debug(cnt);
	if (cnt == 1) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	unsyncIO;

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}