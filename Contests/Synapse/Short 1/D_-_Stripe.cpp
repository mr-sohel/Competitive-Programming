/**
 *	Author:  Sohel Rana
 *	Date:    
 *	Task:    test 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf          push_front
#define pb          push_back
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
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5+5;

using namespace std;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
	int n, sum = 0, s = 0, cnt = 0;
	cin >> n;
    int a[n+5] = {0};
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	for(int i = 1; i < n;i++) {
		s += a[i];
		if(s*2 == sum) cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}
