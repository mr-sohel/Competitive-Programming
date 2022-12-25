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
const int MX = 1e7;

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

bitset < MX + 5 > mark;

void sieve() {
	for (int i = 4; i <= MX; i += 2) mark[i] = true;
	int sq = sqrt(MX) + 1;
	for (int i = 3; i <= sq; i += 2) {
		if (!mark[i]) {
			for (int j = i * i; j <= MX; j += (i + i)) {
				mark[j] = true;
			}
		}
	}
}

vector<int> ans (MX, 13175);
set<int> combi;

void calc() {
	for (int i = 1; i * i <= MX; i++) {
		for (int j = 1; (j * j * j * j) <= MX; j++) {
			int a = (i * i) + (j * j * j * j);
			if (a <= MX and !mark[a]) {
				combi.insert(a);
			}
		}
	}
	int i = 0, cnt = 0;
	for (auto it = combi.begin(); it != combi.end(); ) {
		if (*it <= i) {
			cnt++;
			it++;
		} else {
			ans[i] = cnt;
			i++;
		}
	}
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	sieve();
	calc();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << ans[n] << endl;
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}