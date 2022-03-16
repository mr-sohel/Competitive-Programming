/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-16 21:07:03
 *	Task:    A_Brain_s_Photos 
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


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, m;
    cin >> n >> m;
    vector<char> v[n];
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            v[i].pb(ch);
        }
    }
    bool check = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 'C' or v[i][j] == 'M' or v[i][j] == 'Y' or v[i][j] == 'M') check = true;
        }
    }
    if (check) {
        cout << "#Color"<<endl;
    } else
        cout << "#Black&White" << endl;
    return 0;
}