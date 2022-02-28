/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-27 16:09:08
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
const int MOD = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;

ull fact(ull n){
    ull product = 1, i;
    for(i = 1; i <= n; i++){
        product = (product * i) % MOD;
    }
    return product % MOD;
}

int main(){
    //Fast_io;
    ull t;
    cin >> t;
    while(t--){
        ull n, fv;
        cin >> n;
        fv = fact(n/2);
        fv = (((fv*fv)  % MOD) * ((n/2) + 1)) % MOD;
        cout << (fv - 1) % MOD << endl;
    }
    return 0;
}