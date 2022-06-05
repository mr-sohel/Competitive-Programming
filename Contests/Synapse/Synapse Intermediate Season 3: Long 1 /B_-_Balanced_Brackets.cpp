/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-22 19:08:58
 *	Task:    B_-_Balanced_Brackets 
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
    int t;
    cin >> t;
    while (t--) {
        bool flag = true;
        string s;
        cin >> s;
        deque<char> dq;
        for (int i = 0;i < sz(s); i++) {
            char ch;
            ch = s[i];
            dq.pb(ch);
        }
        for (int i = 0; i < sz(s) / 2; i++) {
            char a, b;
            a = dq.front(), b = dq.back();
            cout << a << " " << b << endl;
            if (a != b) {
                flag = false;
                break;
            }
            dq.pop_back();
            dq.pop_front();
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}