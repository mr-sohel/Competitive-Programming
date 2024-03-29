/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-03 00:20:44
 *	Task:    A_Divan_and_a_Store 
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


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll t; 
    cin >> t;
    while (t--) {
        ll i, n, l, r, k;
        ull sum = 0;
        cin >> n >> l >> r >> k;
        vector<ll> a;
        for (int i = 0;i < n; i++) {
            ll temp;
            cin >> temp;
            if (temp >= l and temp <= r)
                a.pb(temp);
        }
        sort(all(a));
        for (i = 0; i < sz(a); i++) {
            if (k < a[i])
                break;
            k = k - a[i];
        }
        cout << i << endl;
    }
    return 0;
}
