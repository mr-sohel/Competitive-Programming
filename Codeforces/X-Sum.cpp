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
const int mx = 2e5 + 5;


using namespace std;


#ifndef ONLINE_JUDGE
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


void solve() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x = 0;
			int  ii = i, jj = j;
			while (ii >= 0 and ii < n and jj >= 0 and jj < m) { // left up
				x += a[ii][jj];
				ii--, jj--;
			}
			ii = i, jj = j;
			while (ii >= 0 and ii <n and jj >= 0 and jj < m) { // right down
				x +=  a[ii][jj];
				ii++, jj++;
			}
			ii = i, jj = j;

			while (ii >= 0 and ii < n and jj >= 0 and jj < m) { // left down
				x += a[ii][jj];
				ii++, jj--;
			}
			ii = i, jj = j;
			while (ii >= 0 and ii < n and jj >= 0 and jj < m) { // right up

				x += a[ii][jj];
				ii--, jj++;
			}
			x -= (a[i][j] + a[i][j] + a[i][j]);
			ans = max(ans, x);
		}
	}
	cout << ans << endl;

}
int main() {
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	unsyncIO;
	int t; cin >> t;
	while (t--) {
		solve();
	}


#ifndef ONLINE_JUDGE
	cerr << "\nRuntime: " << prec(10) << (ld) (clock() - tStart) / CLOCKS_PER_SEC << endl;
#endif
	return 0;
}