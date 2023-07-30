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
string a, b, current = "";
bitset<25> vis;
vector<string> ans;
bool cmp(string a, string b) {
	if (sz(a) > sz(b)) return true;
	if (sz(a) == sz(b)) {
		return a > b;
	}
	return false;
}
void rec(int pos) {
	// if (cmp(current, b)) return;
	if (pos == sz(a)) {
		ans.push_back(current);
		return;
	}
	for (int i = 0; i < sz(a); i++) {
		if (vis[i]) continue;
		vis[i] = 1;
		current.push_back(a[i]);
		rec(pos + 1);
		current.pop_back();
		vis[i] = 0;
	}
}

void solve() {
	cin >> a >> b;
	rec(0);
	for (auto it : ans) cout << it << endl;
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