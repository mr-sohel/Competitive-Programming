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
const ll N = 1000 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int n, m, a[N];

bool check(int mid) {
	int cnt = 1, sum = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] > mid) return false;
		sum += a[i];
		if (sum > mid) {
			cnt++;
			sum = a[i];
		}
	}
	return cnt <= m;
}

void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int lo = 1, hi = 1e9, mid, ans = 0;
	while (lo <= hi) {
		mid = (lo + hi) / 2;
		if (check(mid)) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	testcase;
	cout << ans << endl;
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