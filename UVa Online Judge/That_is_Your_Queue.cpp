/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-29 16:51:45
 *	Task:    P_-_That_is_Your_Queue 
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
    int p, c, tc = 1;
    while (cin >> p >> c and p and c) {
        cout << "Case " << tc++ << ":" << endl;
        list<int> ls;
        for (int i = 1; i <= min(p, c); i++) {
            ls.push_back(i);
        }
        while (c--) {
            string s;
            int x;
            cin >> s;
            if (s == "N") {
                cout << ls.front() << endl;
                ls.push_back(ls.front());
                ls.pop_front();
            } else {
                cin >> x;
                ls.remove(x);
                ls.push_front(x);
            }
        }
    }
    return 0;
}