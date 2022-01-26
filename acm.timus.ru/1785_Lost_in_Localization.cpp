/**
 *	Author:  Sohel Rana
 *	Date:    2022-01-26 12:03:06
 *	Task:    1785_Lost_in_Localization 
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
const ld EPS = 1.0e-14;

using namespace std;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    while (cin >> n) {
        if (n >= 1 and n <= 4)
            cout << "few" << endl;
        else if (n >= 5 and n <= 9)
            cout << "several" << endl;
        else if (n >= 10 and n <= 19)
            cout << "pack" << endl;
        else if (n >= 20 and n <= 49)
            cout << "lots" << endl;
        else if (n >= 50 and n <= 99)
            cout << "horde" << endl;
        else if (n >= 100 and n <= 249)
            cout << "throng" << endl;
        else if (n >= 250 and n <= 499)
            cout << "swarm" << endl;
        else if (n >= 500 and n <= 999)
            cout << "zounds" << endl;
        else
            cout << "legion" << endl;
    }
    return 0;
}
