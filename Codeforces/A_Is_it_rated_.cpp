/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-24 23:24:27
 *	Task:    A_Is_it_rated_ 
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
#define debug(x)		cerr << #x << " = " << (x) << endl
#define debug2(x,y) 	cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double			    db;
typedef long double		    ld;
typedef long long 		    ll;
typedef unsigned long long	ull;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0e-14;

using namespace std;
bool israted(int n, int a[], int b[]) { 
    for (int i = 0; i < n; i++) {
        if(a[i] != b[i]) 
            return true;
    }
    return false;
}
bool isunrated(int n, int a[], int b[]) {
    // bool flag = false;
    //     for (int i = 0; i < n; i++) {
    //     if(a[i] != b[i]) 
    //        flag = true;
    // }
    // if(flag == false) {
 
    // }
    for(int i = 0; i < n-1; i++) {
        if(a[i] < a[i+1])
            return true;
    }
    return false;
 
}
 
int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
    }
    if(israted(n,a,b))
        cout<<"rated"<<endl;
    else if(isunrated(n,a,b))
        cout<<"unrated"<<endl;
    else 
        cout<<"maybe"<<endl;
    return 0;
}