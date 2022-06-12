/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-08 21:17:28
 *	Task:    test 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
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
const int mx = 1e8;

using namespace std;


int main()
{
	//freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
	int t;
	cin>>t;
	while(t--) {
		ll n, k;
		cin>>n>>k;
		ll low = 1, high = 2*k, mid;
		while(low < high) {
			mid = (low+high)/2;
			//cout<<"Low: "<<low<<" Mid: "<<mid<<" High: "<<high<<endl;
			if(mid - mid/n >= k) { // (mid/n is number of multiples of n inside 1 to mid)
				high = mid;
			} else {
				low = mid+1;
			}
		}
		//cout<<"Low: "<<low<<" Mid: "<<mid<<" High: "<<high<<endl;
		cout<<low<<endl;
	}
	return 0;
}
