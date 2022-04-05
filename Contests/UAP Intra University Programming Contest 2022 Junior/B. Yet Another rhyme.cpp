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
const int mx = 1e5;

using namespace std;

bool check(string x, string y) {
	if(sz(x) >= 3 and sz(y) >= 3) {
		if((x[sz(x)-1] == y[sz(y)-1]) and ((x[sz(x)-2] == y[sz(y)-2])) and ((x[sz(x)-3] == y[sz(y)-3])))
			return true;
		else 
			return false;
	}
	return false;
}

int main()
{
	//freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
	vector<string> vec(14);
	for(int i = 0; i < 14; i++) cin>> vec[i];
	string x,y;
	bool flag = false;
	for(int i = 0;i < 14; i++) {
		for(int j = 0; j < 14; j++) {
			if(i == j)
				continue;
			x = vec[i], y = vec[j];
			if(check(x,y)) {
				flag = true;
				break;				
			} 
		}
		if(flag)
			break;
	}
	//debug(flag);
	//debug2(x,y);
	if(flag) {
		cout<<"yes"<<endl;
		auto it = find(all(vec), x);
		vec.erase(it);
		it = find(all(vec), y);
		vec.erase(it);
		for(int i = 0; i < 6; i++) {
			cout<<vec[i]<<" ";
		}
		cout<<x<<endl;
		for(int i = 6; i < sz(vec); i++) {
			cout<<vec[i]<<" ";
		}
		cout<<y<<endl;
		
	} else {
		cout<<"no"<<endl;
	}
	return 0;
}