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

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int t; cin >> t;
	while (t--) {
		ll n;
		char c;
		cin >> n >> c;
		string s;
		cin >> s;
		vector<ll> g;
		vector<int> ch;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'g') {
				g.pb(i + 1);
				g.pb(i + n + 1);
			}
			if (s[i] == c)
				ch.pb(i + 1);
		}
		sort(all(g));
		ll ans = 0;
		for (int i = 0; i < sz(ch); i++) {
			ll idx = lower_bound(all(g), ch[i]) - g.begin();
			ans = max(ans, g[idx] - ch[i]);
		}
		cout << ans << endl;
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (clock() - tStart) / 1000 << " miliseconds" << endl;
#endif
	return 0;
}
/*
	9 y
	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
	r r r g y y y g y r  r  r  g  y  y  y  g  y
	g at pos -> 4 8 13 17
	y at pos -> 5 6 7 9
*/

/*
	5 r
	1 2 3 4 5 6 7 8 9 10
	r g g r y r g g r y
	g at pos -> 2 3 7 8
	r at pos -> 1 4
*/