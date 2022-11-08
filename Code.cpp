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
#define mp            make_pair
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
const int MX = 2e5;

#ifdef LOCAL
#include"debug.h"
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
	int n, m; cin >> n >> m;
	int xy, rounds = 1;
	vector<int> v(n);
	vector<int> a(n);
	for (int i = 1; i <= n; i++) {
		cin >> xy;
		a[i] = xy;
		v[xy] = i;
	}
	for (int i = 1; i <= n - 1; i++) {
		if (v[i] > v[i + 1])
			rounds++;
	}
	int x, y;
	// debug(rounds);
	while (m--) {
		cin >> x >> y;

		if (a[x] < a[y]) {
			int tmp = a[x];
			a[x] = a[y];
			a[y] = tmp;
			rounds++;
		} else {
			int tmp = a[x];
			a[x] = a[y];
			a[y] = tmp;
			rounds--;
		}
		cout << rounds << endl;
		// for (int i = 1; i <= n; i++) cout << a[i] << " ";
		// cout << endl;
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}