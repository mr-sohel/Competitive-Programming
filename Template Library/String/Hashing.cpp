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
const ll N = 1e6 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...)
#endif

const ll P[] = {3797, 1000003};

ll bigMod (ll a, ll e) {
	if (e == -1) e = MOD - 2;
	ll ret = 1;
	while (e) {
		if (e & 1) ret = ret * a % MOD;
		a = a * a % MOD, e >>= 1;
	}
	return ret;
}
int pwr[2][N], inv[2][N];

void initHash() {
	for (int it = 0; it < 2; ++it) {
		pwr[it][0] = inv[it][0] = 1;
		ll INV_P = bigMod(P[it], -1);
		for (int i = 1; i < N; ++i) {
			pwr[it][i] = (ll) pwr[it][i - 1] * P[it] % MOD;
			inv[it][i] = (ll) inv[it][i - 1] * INV_P % MOD;
		}
	}
}
struct RangeHash {
	vector <int> h[2], rev[2];

	RangeHash (const string S, bool revFlag = 0) {
		for (int it = 0; it < 2; ++it) {
			h[it].resize(S.size() + 1, 0);
			for (int i = 0; i < sz(S); ++i) {
				h[it][i + 1] = (h[it][i] + (ll) pwr[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
			}
			if (revFlag) {
				rev[it].resize(sz(S) + 1, 0);
				for (int i = 0; i < sz(S); ++i) {
					rev[it][i + 1] = (rev[it][i] + (ll) inv[it][i + 1] * (S[i] - 'a' + 1)) % MOD;
				}
			}
		}
	}

	inline ll get (int l, int r) {
		if (l > r) return 0;
		ll one = (ll) (h[0][r + 1] - h[0][l]) * inv[0][l + 1] % MOD;
		ll two = (ll) (h[1][r + 1] - h[1][l]) * inv[1][l + 1] % MOD;
		if (one < 0) one += MOD;
		if (two < 0) two += MOD;
		return one << 31 | two;
	}

	inline ll getReverse (int l, int r) {
		if (l > r) return 0;
		ll one = (ll) (rev[0][r + 1] - rev[0][l]) * pwr[0][r + 1] % MOD;
		ll two = (ll) (rev[1][r + 1] - rev[1][l]) * pwr[1][r + 1] % MOD;
		if (one < 0) one += MOD;
		if (two < 0) two += MOD;
		return one << 31 | two;
	}
};

void solve() {
	string s, p;
	cin >> s >> p;
	int cnt = 0, sizeS = sz(s), sizeP = sz(p);
	initHash();
	RangeHash HashPattern(p);
	ll patternHash = HashPattern.get(0, sizeP - 1);
	RangeHash HashString(s);
	for (int i = 0; i < sizeS - (sizeP - 1); i++) {
		if ((HashString.get(i, i + (sizeP - 1))) == patternHash)
			cnt++;
	}
	cout << cnt << endl;
}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

#ifdef LOCAL
	fprintf(stderr, "\nTime: %.5lf\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}