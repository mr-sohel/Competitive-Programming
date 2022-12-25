/**
 *  Author:  Sohel Rana
 *  Date:    2021-12-09 14:55:05
 *  Task:    Hex_a_bonacci
**/
#include <bits/stdc++.h>
#define endl            '\n'
#define sqr(x)          (x) * (x)
#define gcd(x, y)       __gcd(x, y)
#define lcm(x, y)       ((x/gcd(x,y)) * y)
#define pf(x)           push_front(x)
#define pb(x)           push_back(x)
#define eb(x)           emplace_back(x)
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define sz(x)           (int)x.size()
#define debug(x)        cerr << #x << " = " << (x) << endl
#define debug2(x,y)     cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double              db;
typedef long double         ld;
typedef long long           ll;
typedef unsigned long long  ull;

const ld PI = acos((ld) - 1);
const ll MOD = 10000007LL;
const long long INF = 1e18;
const ld eps = 1.0e-14;

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n, cases;
    ll v [10000];
    cin >> cases;
    for (int caseno = 1; caseno <= cases; ++caseno) {

        cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5] >> n;
        for (int i = 6; i <= n; i++) {
            v[i] = (v[i - 1] + v[i - 2] + v[i - 3] + v[i - 4] + v[i - 5] + v[i - 6]) % MOD;

        }
        cout << "Case " << caseno << ": " << v[n] % MOD << endl;
    }
    return 0;
}