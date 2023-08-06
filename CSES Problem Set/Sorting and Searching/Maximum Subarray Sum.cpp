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

ll a, pref[N], mini[N];

void solve() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		pref[i] = pref[i - 1] + a;
	}
	for (int i = 1; i <= n; i++) {
		mini[i] = min(mini[i - 1], pref[i - 1]);
	}
	ll ans = LLONG_MIN;
	for (int r = 1; r <= n; r++) { // for every perf[r] we need to find such pref[l-1] which is minimum in the left of pref[r], so that pref[r] - pref[l-1] is maximum;
		ans = max(ans, pref[r] - mini[r]);
	}
	cout << ans << endl;
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
