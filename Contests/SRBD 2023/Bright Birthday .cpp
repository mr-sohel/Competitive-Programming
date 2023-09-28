#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using lll = __int128_t;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

vector<string> c = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};

void solve() {
	string s; cin >> s;
	unordered_map<char, int> freq, temp;
	for (int i = 0; i < sz(s); i++) {
		freq[s[i]]++;
	}
	temp = freq;
	int ans = 0;
	for (int mask = 0; mask < (1 << 15); mask++) {
		set<string> st;
		freq = temp;
		bool neg = false;
		for (int i = 0; i < 15; i++) {
			if (mask & (1LL << i)) {
				st.insert(c[i]);
				for (char it : c[i]) {
					freq[it]--;
					if (freq[it] < 0) neg = true;
				}
			}
		}
		if (!neg)
			ans = max(ans, sz(st));
	}
	cout << ans << endl;
}

int main() {
	unsyncIO;

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}