/**
 *  Author:  Sohel Rana
 *  Date:    2020-11-06 22:57:29
 *  Task:    Combinations
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(x,y)    __gcd(x, y)
#define lcm(x,y)    ((x/gcd(x,y)) * y)
#define pf(x)       push_front(x)
#define pb(x)       push_back(x)
#define eb(x)       emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)       (int)x.size()
#define prec(x)     fixed<<setprecision(x)
#define debug(x)    cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld) - 1);
const int MOD = 1000003;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e6 + 2;

using namespace std;

ll BigMod(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}
ll ModInverse(ll number, ll mod) {return BigMod(number, mod - 2, mod);}

ll fact[mx];

void pre() {
    int i;
    fact[0] = 1;
    for (i = 1; i < mx; i++) {
        fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
    }
}
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    pre();
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        ll n, r, ans;
        cin >> n >> r;
        ll fact1 = fact[n] % MOD;
        ll fact2 = ((fact[r] % MOD) * (fact[n - r] % MOD)) % MOD;
        ans = (fact1 * ModInverse(fact2, MOD)) % MOD;
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}