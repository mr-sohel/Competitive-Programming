/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-15 18:42:31
 *	Task:    1025_Democracy_in_Danger 
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
#define make_unique(x) 		(x).resize(unique(all((x)))-(x).begin())
#define debug(x)			cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 		cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
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
    //unsyncIO;
    int k, res = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0;i < k; i++) {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0;i < (k / 2) + 1; i++) {
        res += (v[i] / 2) + 1;
    }
    cout << res << endl;
    return 0;
}