/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-30 14:10:04
 *	Task:    Secret_Origins 
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

string dec_to_bin(int n) {
    string ret = "";
    for (int i = 31; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k) ? '1' : '0';
    }
    return ret;
}

int bin_to_dec(string s) {
    int ret = 0;
    for (int i = 0; i < 32; i++)
        ret = (2 * ret) + s[i] - '0';
    return ret;
}

int main() 
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        string bin = dec_to_bin(n);
        next_permutation(bin.begin(), bin.end());
        cout<<"Case "<<i<<": "<<bin_to_dec(bin)<<endl;
    }
    return 0;
}