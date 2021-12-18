/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-17 22:36:23
 *	Task:    1313_Some_Words_about_Sport 
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
#define make_unique(x) 	(x).resize(unique(all((x)))-(x).begin())
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

int a[101][101];

void printc(int i) {
    int j = 0;
    while (i >= 0) {
        cout << a[i][j] << " ";
        i--, j++;
    }

}

void printr(int i, int n) {
    int j = n - 1;
    while (i <= n - 1) {
        cout << a[j][i] << " ";
        j--, i++;
    }

}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, t;
    cin >> t;
    n = t;
   
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    // Print column and diagonally up right
    for (int i = 0; i < n; i++) {
        printc(i);
    }
    //print last row and diagonally up right
    for (int i = 1; i < n; i++) {
        printr(i, n);
    }
    return 0;
}
