/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-12 16:57:25
 *	Task:    Ekka_Dokka 
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
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ll w, n, m;
        cin >> w;
        if (w % 2 != 0) {
            cout << "Case " << i << ": " << "Impossible" << endl;
        }
        else {
            n = w / 2;
            m = 2;
            while (n % 2 == 0) {
                n /= 2;
                m *= 2;
            }
            cout << "Case "<<i<<": "<< n << " " << m << endl;
        }
    }
    return 0;
}