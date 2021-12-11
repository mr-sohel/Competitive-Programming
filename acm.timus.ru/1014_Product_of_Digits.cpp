/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-11 00:02:05
 *	Task:    1014_Product_of_Digits 
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


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n;
    cin >> n;
    int counter = 13;
    vector<int> a(counter + 1, 0);
    if (n == 0) {
        cout << 10 << endl;
        return 0;
    }
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    while (n > 1) {
        for (int j = 9; j >= 0; j--) {
            if (j == 1) {
                cout << -1 << endl;
                return 0;
            }
            if(n % j == 0) {
                a[counter] = j;
                counter--;
                n /= j;
                break;
            }
        }
    }
    for (int i = counter + 1; i < 14; i++)
        cout << a[i];
    cout << endl;

    return 0;
}