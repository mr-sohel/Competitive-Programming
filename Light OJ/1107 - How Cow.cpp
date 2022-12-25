/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-11 23:48:29
 *	Task:    How_Cow
**/
#include <bits/stdc++.h>
#define endl				'\n'
#define sqr(x)				(x) * (x)
#define gcd(x, y)			__gcd(x, y)
#define lcm(x, y)			((x/gcd(x,y)) * y)
#define pf(x) 	  			push_front(x)
#define pb(x)				push_back(x)
#define eb(x)				emplace_back(x)
#define all(x)      		(x).begin(), (x).end()
#define rall(x)				(x).rbegin(), (x).rend()
#define sz(x)				(int)x.size()
#define make_unique(x) 		(x).resize(unique(all((x))) - (x).begin())
#define debug(x)			cerr << #x << " = " << (x) << endl
#define debug2(x,y) 		cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    		ios_base::sync_with_stdio(0); cin.tie(0)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1.0e-14;

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   // unsyncIO;
    int x1, x2, y1, y2, t, n, x, y;
    cin>>t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":\n";
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;

        while(n--) {
            cin >> x >> y;
            if (x > x1 and x < x2 and y > y1 and y < y2)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
