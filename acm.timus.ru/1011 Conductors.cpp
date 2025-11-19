/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-10 22:15:43
 *	Task:    1011 Conductors 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
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

int main() {
    int res = 0, a1, a2;
    double p, q;
    scanf("%lf%lf", &p, &q);
    do {
        res++, a1 = (int)(p * (double)res) / 100, a2 = (int)(q * (double)res - (0.000000001)) / 100;
    } while (a1 == a2);
    printf("%d\n", res);
}