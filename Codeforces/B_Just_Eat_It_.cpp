/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-04 14:03:56
 *	Task:    B_Just_Eat_It_ 
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
#define debug(x)		cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1e-9;

using namespace std;

bool solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll all = 0;
    for (int i = 0;i < n; i++)
        all += a[i];
    ll sum = 0;
    for (int i = 0; i < n - 1; i++){
        sum += a[i];
        if (sum >= all)
            return false;
    }
    sum = 0;
    for (int i = n - 1; i > 0; i--) {
        sum += a[i];
        if (sum >= all)
            return false;
    }
    return true;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}