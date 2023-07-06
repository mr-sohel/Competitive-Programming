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
#endif

int countOfZeros(int n) {
	int cnt = 0;
	for (ll i = 5; i <= n; i = i * 5) {
		cnt += n / i;
	}
	return cnt;
}

int BS(int n) {
	int lo = 1, hi = 1e9, mid, ans = -1;
	while (lo <= hi) {
		mid = (lo + hi) / 2;
		int x = countOfZeros(mid);
		if (x > n) {
			hi = mid - 1;
		}
		else if (x < n) {
			lo = mid + 1;
		} else {
			ans = mid;
			hi = mid - 1 ;
		}
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	cout << BS(n) << endl;
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