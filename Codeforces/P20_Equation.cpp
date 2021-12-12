/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-12 10:24:44
 *	Task:    P20_Equation 
**/
#include <bits/stdc++.h>
#define endl				'\n'
#define sqr(x)				(x) * (x)
#define gcd(x, y)			__gcd(x, y)
#define lcm(x, y)			((x/gcd(x,y)) * y)
#define pf(x) 	  			push_front(x)
#define pb(x)				push_back(x)
#define eb(x)				emplace_back(x)
#define all(x)      		(x).begin(), (x).end()
#define rall(x)				(x).rbegin(), (x).rend()
#define sz(x)				(int)x.size()
#define make_unique(x) 		(x).resize(unique(all((x))) - (x).begin())
#define debug(x)			cerr << #x << " = " << (x) << endl
#define debug2(x,y) 		cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    		ios_base::sync_with_stdio(0); cin.tie(0)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1.0e-14;

using namespace std;


bool isprime(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n) + 1; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;

    //special cases n = 1, n=2;
    if (n == 1) {
        cout << 9 << " " << 8 << endl;
    }
    else if (!isprime(n)) {
        cout << n * 2 << " " << n << endl;
    }
    else {
        cout << n * 3 << " " << n * 3 - n << endl;
    }
    return 0;
}
