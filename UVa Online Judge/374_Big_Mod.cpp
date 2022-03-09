/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-02 18:33:20
 *	Task:    374_Big_Mod 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
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

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

ll BigMod(ll b, ll p, ll m) {
    if (p == 0) return 1;
    if (p % 2 == 0) {
        ll ret = BigMod(b, p / 2, m);
        return ((ret % m) * (ret % m)) % m;
    }
    return ((b % m) * (BigMod(b, p - 1, m) % m)) % m;
}

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    unsyncIO;
    ll b, p, m;
    while(cin >> b >> p >> m) {
        cout << BigMod(b,p,m)<< endl;
    }
    return 0;
}
