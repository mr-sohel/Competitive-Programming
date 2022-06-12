/**
 *	Author:  Sohel Rana
 *	Date:    2022-06-07 23:43:36
 *	Task:    F_-_Eating_Candies 
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
const int mx = 2*1e5+5;

using namespace std;

ll a[mx];

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        ll lo = 1, hi = n, alice = 0, bob = 0, ans = 0;
        alice = a[lo], bob = a[hi];
        while (lo < hi) {
            if (alice == bob) {
                ans = max(ans, lo + (n - hi) + 1);
            }
            if (alice <= bob) {
                lo++;
                alice += a[lo];
            } else {
                hi--;
                bob += a[hi];
            }
        }
        cout << ans << endl;
    }
    return 0;
};

/*

6
2 1 4 2 4 1

*/
