/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-11 23:35:23
 *	Task:    C_To 3 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

int solve(string s) {
	int len = s.length(),sum = 0;
	for(int i = 0; i < len;i++) sum += s[i] - '0';
	//debug(sum);
	if(sum % 3 == 0) return 0;
	if(len == 1) return -1;
	for(int i = 0; i < len; i++) {
		if((sum % 3) == (s[i]-'0') % 3) return 1;
	}
	if(len == 2 ) return -1;
	return 2;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    string s;
    cin>>s;
	cout<<solve(s)<<endl;
	return 0;
}
