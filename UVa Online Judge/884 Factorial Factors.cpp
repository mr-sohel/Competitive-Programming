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
const int MX = 1e6 + 5;

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
vector<int>primes;
bitset < MX + 5 > mark;
int ans[MX + 5];

void sieve() {
	for (int i = 4; i <= MX; i += 2) mark[i] = true;
	for (int i = 3; i * i <= MX; i += 2) {
		if (!mark[i]) {
			for (int j = i * i; j <= MX; j += i + i) mark[j] = true;
		}
	}
	primes.push_back(2);
	for (int i = 3; i <= MX; i += 2) {
		if (!mark[i])
			primes.push_back(i);
	}
}

int PrimeFact(int n) {
	int total = 0;
	if (!mark[n]) return 1;
	for (int i = 0; n != 1; i++) {
		if (n % primes[i] == 0) {
			while (n % primes[i] == 0) {
				n /= primes[i];
				total++;
				if (!mark[n]) return ++total;
			}
		}
	}
	return total;
}


int main() {

#ifdef LOCAL
	clock_t tStart = clock();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	unsyncIO;
	sieve();
	int res = 0;
	for (int i = 2; i < MX; i++) {
		res += PrimeFact(i);
		ans[i] = res;
	}
	int n;
	while (cin >> n) {
		cout << ans[n] << endl;
	}

#ifdef LOCAL
	cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
	return 0;
}