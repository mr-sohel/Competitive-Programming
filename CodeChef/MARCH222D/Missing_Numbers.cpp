#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;

int x, y;

void check(ll a, ll b, ll c, ll d) {
    if ((a + b) % 2 == 0) {
        ll t1 = (a + b) / 2;
        //ll t2 = abs(a - t1);
        ll t2 = abs(a - b) / 2;
        if (t1 <= 0 or t1 > (ll)1e4 or t2 <= 0 or t2 > (ll)1e4) {
            x = -1;
            y = -1;
           return;
        }
        if ((t1 * t2 == c and t1 / t2 == d) or (t1 * t2 == d and t1 / t2 == c)) {
            x = t1;
            y = t2;
        } else {
            x = -1;
            y = -1;
        }

    } else{
        x = -1;
        y = -1;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    // Editorial Solution Upsolve
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        
        check(a, b, c, d);
        if (x == -1 and y == -1)
            check(a, c, b, d);
        if (x == -1 and y == -1)
            check(a, d, b, c);
        if (x == -1 and y == -1)
            check(b, c, a, d);
        if (x == -1 and y == -1)
            check(b, d, a, c);
        if (x == -1 and y == -1)
            check(c, d, a, b);
        cout << x << " " << y << endl;

    }
    return 0;
}