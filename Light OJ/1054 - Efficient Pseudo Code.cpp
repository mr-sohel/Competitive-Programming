#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define mk            make_pair
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

const int MX = 1e7;
vector<ll> primes, factors;
map<ll, ll> times;
bitset < MX + 5 > mark;

void sieve() {
	int sq = sqrt(MX);
	for (int i = 3; i <= sq; i += 2)
		if (!mark[i] && (i * i) < MX) {
			for (int j = i * i; j < MX; j += (i << 1))
				mark[j] = true;
		}
	primes.push_back(2);
	for (int i = 3; i < MX; i += 2) {
		if (mark[i] == false)
			primes.push_back(i);
	}
}

void primeFactorize(int n) {
	for (int i = 0; primes[i] * primes[i] <= n; i++) {
		if (n % primes[i] == 0) {
			factors.push_back(primes[i]);
			while (n % primes[i] == 0) {
				n /= primes[i];
				times[primes[i]]++;
			}
		}
	}
	if (n > 1) {
		if (!times[n]) {
			factors.push_back(n);
		}
		times[n]++;
	}
}

ll bigmod(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}

int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	sieve();
	int t, tc = 1, n, m;
	cin >> t;
	while (t--) {
		times.clear();
		factors.clear();
		cin >> n >> m;
		primeFactorize(n);
		for (auto i : factors) {
			times[i] *= m;
		}
		ll ans = 1;
		for (auto i : factors) {
			ll up = bigmod(i, times[i] + 1, MOD) - 1; // pow(prime[i],cnt+1)-1;
			if (up < 0)
				up += MOD;
			ll down = bigmod(i - 1, MOD - 2, MOD); // prime[i]-1;
			up *= down; // up / down;
			ans = ((ans % MOD) * (up % MOD)) % MOD; // ans *= up;
		}
		cout << "Case " << tc++ << ": " << ans << endl;
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}