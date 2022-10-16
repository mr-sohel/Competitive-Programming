#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define fi            first
#define se            second
#define sz(x)         (long long)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld) - 1);
const int mod = 1e9 + 7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 2e5;

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

int main() {

#ifdef LOCAL
	auto tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int n; cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	ll pref[n + 1];
	pref[0] = a[0] = 0;
	for (int i = 1; i <= n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	ll ans = INT_MIN, mn = 0;
	for (int r = 1; r <= n; r++) {
		ans = max(ans, pref[r] - mn);
		mn = min(mn, pref[r]);
	}
	cout << ans << endl;
#ifdef LOCAL
	cerr << "Runtime: " << (clock() - tStart) / 1000 << " miliseconds" << endl;
#endif
	return 0;
}