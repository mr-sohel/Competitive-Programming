/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-06 22:57:29
 *	Task:    O_Combinations 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1000003;
const long long INF = 1e18;
const ld eps = 1.0E-14;
inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;



long long fact[MOD];
void pre() {
    int i;
    fact[0] = fact[1] = 1;
    for (i = 2; i < MOD; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}
ll InverseMod(ll base, ll pow) {
    if (pow == 0) return 1;

    ll ans = InverseMod(base, pow / 2);

    ans = (ans * ans) % MOD;

    if (pow & 1) {
        return (ans * base) % MOD;
    } else {
        return ans;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ld stime = gett();
    pre();
    ll t;
    cin >> t;
    int tc = 1;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if(n < k) {
            cout << "Case " << tc++ << ": " << 0 << endl;
            continue;
        }
        if(n == k or k == 0) {
            cout << "Case " << tc++ << ": " << 1 << endl;
            continue;
        }
        ll fact1 = fact[n];
        ll fact2 = ((fact[n - k] % MOD) * (fact[k] % MOD)) % MOD;
        ll ans = ((fact1 % MOD) * InverseMod(fact2, MOD - 2)) % MOD;
        cout << "Case " << tc++ << ": " << ans << endl;
    }
    cerr << "Time: " << gett() - stime << endl;
    return 0;
}
