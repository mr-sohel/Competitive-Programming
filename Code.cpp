#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
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

void solve() {
	for (int i = 0; i < 10; i++) {
		v[i] = i;
	}
	debug(v);
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