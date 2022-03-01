/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-01 22:21:10
 *	Task:    C_Unique_Number 
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

map<int, int> m;

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t,x;
    cin >> t;
    while (t--) {
        cin >> x;
        for (int i = 1;i <= 9; i++) {
            m[i] = i;
        }
        for (int i = 19, j = 10;i <= 89; i += 10, j++)
            m[j] = i;
        for (int i = 189, j = 18;i <= 789; i += 100, j++)
            m[j] = i;
        for (int i = 1789, j = 25;i <= 6789; i += 1000, j++)
            m[j] = i;
        for (int i = 16789, j = 31;i <= 56789; i += 10000, j++)
            m[j] = i;
        for (int i = 156789, j = 36;i <= 456789; i += 100000, j++)
            m[j] = i;
        for (int i = 1456789, j = 40;i <= 3456789; i += 1000000, j++)
            m[j] = i;
        for (int i = 13456789, j = 43;i <= 23456789; i += 10000000, j++)
            m[j] = i;
        for (int i = 123456789, j = 45;i <= 123456789; i += 100000000, j++)
            m[j] = i;
        if (x > 45)
            cout << "-1" << endl;
        else
            cout << m[x] << endl;
    }
    return 0;
}