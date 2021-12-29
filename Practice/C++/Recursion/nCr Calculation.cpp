/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-29 15:37:17
 *	Task:    T_Combination 
**/
#include <iostream>
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

//const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const db EPS = 1e-9;

using namespace std;

double CalCombination(double n,double r) {
      if(r > 0)
         return (n/r)*CalCombination(n-1,r-1) + EPS;
      else
   return 1;
}
int main() {
    long long n, r, res;
    cin >> n >> r;
    res = CalCombination(n, r);
    cout << res;
}