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
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const ld PI = acos((ld) - 1);
const ll MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const ll MX = 1e6 + 5;

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

int a[MX], n, k;


void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> k;
	deque<int> dq;
	for (int i = 1; i <= k; i++) {
		while (!dq.empty() and a[i] >= a[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	// max element will be stored in the front of deque
	for (int i = k + 1; i <= n + 1; i++) {
		cout << a[dq.front()] << " ";
		while (!dq.empty() and dq.front() <= i - k) // if front is not inside the range i to k we remove them.
			dq.pop_front();
		while (!dq.empty() and a[i] >= a[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}