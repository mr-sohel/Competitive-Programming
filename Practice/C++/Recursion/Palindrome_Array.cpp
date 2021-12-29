/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-29 22:29:46
 *	Task:    R_Palindrome_Array 
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

bool flag = true;

void check(int i, int size, int n, int* a) {
    bool ok;
    if (i >= (size) / 2){
        return;
    }
    if (a[i] == a[n])
        ok = true;
    else
        ok = false;
    check(i + 1, size, n - 1, a);
    if (!ok)
        flag = false;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }
    check(0, n, n-1, a);
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}