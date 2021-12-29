/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-29 22:58:25
 *	Task:    S_Array_Average 
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


double avg(int i, int n, int a[]) {
    int sum = 0;
    if (i >= n)
        return 0.0;
    sum += a[i];
    return sum + avg(i + 1, n, a);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    cout.precision(6);
    cout << fixed << avg(0,n,a)/n<<endl;
    return 0;
}