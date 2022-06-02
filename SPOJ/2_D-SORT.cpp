/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-30 15:05:30
 *	Task:    I_-_2_D-SORT 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf		    push_front
#define pb		    push_back
#define fi          first
#define se          second
#define mp          make_pair
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(long long)x.size()
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

bool cmp(pair<int, int>p, pair<int, int> q) {
    return ((p.fi < q.fi) or (p.fi == q.fi and p.se > q.se));
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    unsyncIO;
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n;i++) {
            int x, y;
            cin >> x >> y;
            vp.pb(mp(x, y));
        }
        // sort(all(vp));
        sort(all(vp), cmp);
        for (auto x : vp)
            cout << x.fi <<' '<< x.se << endl;

    }
    return 0;
}
