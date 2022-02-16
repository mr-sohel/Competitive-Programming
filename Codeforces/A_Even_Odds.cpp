/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-16 17:13:22
 *	Task:    A_Even_Odds 
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


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        if (k <= (n / 2)) {
            cout << 2 * k - 1 << endl;
        }
        else {
            cout << (2 * k) - n << endl;
        }
    }
    else {
        if (k <= (n / 2) + 1){
            cout << 2 * k - 1;
        }
        else {
            cout << (2 * k) - (n+1) << endl;
        }
    }
    return 0;
}