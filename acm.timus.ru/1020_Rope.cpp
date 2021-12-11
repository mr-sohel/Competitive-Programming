/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-11 13:29:06
 *	Task:    1020_Rope 
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
    unsyncIO;
    int n;
    double r, d = 0;
    cin >> n >> r;
    db x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i]>> y[i];
    }
    for (int i = 0;i < n - 1; i++) {
        d += sqrt(sqr(x[i] - x[i + 1]) + sqr(y[i] - y[i + 1]));
    }
    d += sqrt(sqr(x[0] - x[n - 1]) + sqr(y[0] - y[n - 1]));
    d += 2 * PI * r;
    printf("%.2lf\n", d);
    return 0;
}