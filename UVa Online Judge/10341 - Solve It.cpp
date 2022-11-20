/**
 *  Author  : Mr_Sohel
 *  Task    :
 *  Algo    : Binary Search + Bisection Method
**/
#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mk            make_pair
#define fi            first
#define se            second
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const db PI = acos((db) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;

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
ld p, q, r, s, t, u;
ld calc(ld x) {
	ld ans;
	ans = p * (1 / exp(x)) + (q * sin(x)) + (r * cos(x)) + (s * tan(x)) + t * sqr(x) + u;
	return ans;
}
int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	while (cin >> p >> q >> r >> s >> t >> u) {
		ld lo = 0.0, hi = 1.0, res, mid;
		if (calc(0)*calc(1) > 0) { // bisection condition
			cout << "No solution" << endl;
		} else {
			while (lo <= hi) {
				mid = (lo + hi) / 2.0;
				res = calc(mid);
				if (res > 0.0) {
					lo = mid + EPS;
				} else  {
					hi = mid - EPS;
				}
				// debug(lo, mid, res);
			}
			cout << prec(4) << mid << endl;
		}
	}
#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}