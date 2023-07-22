#include <bits/stdc++.h>

#define endl          '\n'
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
using ld = long double;
using ull = unsigned long long;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif
ll a, b;
vector<ll>states, ans;
void rec(ll x) {
	if (x > b) {
		return;
	}
	states.push_back(x);
	if (x == b) {
		ans = states;
		exit(2);
	}
	rec(10 * x + 1);
	rec(2 * x);
	states.pop_back();
}

void solve() {
	cin >> a >> b;
	rec(a);
	if (ans.empty()) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << sz(ans) << endl;
		for (auto it : ans) cout << it << " ";
		cout << endl;
	}
}

int main() {
	unsyncIO;

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}