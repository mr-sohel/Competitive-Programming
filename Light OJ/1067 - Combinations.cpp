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
const int MOD = 1e6 + 3;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 1e6 + 10;

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

ll BigMod(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}
ll ModInverse(ll number, ll mod) {return BigMod(number, mod - 2, mod);}

ll fact[MX];
ll inv[MX];

void precalc() {
    int i;
    fact[0] = 1;
    for (i = 1; i < MX; i++) {
        fact[i] = ((fact[i - 1]) * i) % MOD;
    }
    // for (i = 0; i < MX; i++) {
    //     inv[i] =  ModInverse(fact[i], MOD);
    // }
}

int main() {

#ifdef LOCAL
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;
    precalc();
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        ll n, r, ans;
        cin >> n >> r;
        ll u = fact[n] % MOD; // n!
        ll v = ((fact[r]) * (fact[n - r])) % MOD; // r!*(n-r)!
        ans = (u * ModInverse(v, MOD)) % MOD;
        cout << "Case " << i << ": " << ans << endl;
    }

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}