#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define f             first
#define s             second
#define sz(x)         (long long)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;
const int MX = 2e5;

using namespace std;

#ifdef LOCAL
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
	cerr << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cerr.write(names, comma - names) << " = " << arg1 << " | ";
	__f(comma + 1, args...);
}
#else
#define debug(...)
#endif

ll cnt(ll sec, int t, int n, int k[]) {
	ll res = 0;
	for (int i = 1; i <= n; i++) {
		res += sec / k[i];
		if (res >= t)
			break;
	}
	return res;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int n, t;
	cin >> n >> t;
	int k[n + 1];
	for (int i = 1; i <= n; i++) cin >> k[i];
	ll lo = 1, hi = INF, mid, ans = 0;
	while (lo <= hi) {
		mid = lo + (hi - lo) / 2;
		ll x = cnt(mid, t, n, k);
		if (x >= t) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout << ans << endl;

#ifdef LOCAL
	cerr << "\nRuntime: " << (clock() - tStart) / 1000 << " miliseconds" << endl;
#endif
	return 0;
}