/**
 *  Author  : Mr_Sohel
 *  Task    :
 *  Algo    :
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

const ld PI = acos((ld) - 1);
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

const int N = 1005;
int n, m, a[N];
ll check(ll mid) {
	ll cnt = 1, tmp = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] > mid) return -1;
		if (tmp + a[i] > mid) {
			cnt++;
			tmp = a[i];
		} else {
			tmp += a[i];
		}
		// debug(tmp, cnt, a[i]);
	}
	return cnt;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int t, tc = 1; cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) cin >> a[i];
		ll lo = 1, hi = 1e9, mid, ans = 0;
		while (lo <= hi) {
			mid = lo + ((hi - lo) / 2);
			ll calc = check(mid);
			if (calc <= m and calc != -1 ) { // if possible we store the ans and try to find if any better ans exists;
				ans = mid;
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}
			// debug(check(mid), mid, lo, hi);
		}
		cout << "Case " << tc++ << ": " << ans << endl;
	}
#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}