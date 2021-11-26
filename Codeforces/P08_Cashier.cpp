/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-25 14:42:39
 *	Task:    P08_Cashier 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
#define eb(x)			emplace_back(x)
#define all(x)      	(x).begin(), (x).end()
#define rall(x)			(x).rbegin(), (x).rend()
#define sz(x)			(int)x.size()
#define debug(x)		cerr << #x << " = " << (x) << endl
#define debug2(x,y) 	cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double			    db;
typedef long double		    ld;
typedef long long 		    ll;
typedef unsigned long long	ull;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0e-14;

using namespace std;
const int N = 1e5 + 5;;
 
int n, L, a;
int t[N], l[N];
 
int main() {
    unsyncIO;
    cin >> n >> L >> a;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> l[i];
    }
    int res = 0;
    res += t[1] / a;
    for (int i = 1; i < n; i++) {
        res += (t[i + 1] - t[i] - l[i]) / a;
    }
    res += (L - t[n] - l[n]) / a;
    cout << res << endl;
    return 0;
}