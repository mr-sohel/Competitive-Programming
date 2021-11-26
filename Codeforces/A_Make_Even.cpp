/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-25 20:50:03
 *	Task:    A_Make_Even 
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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len;
        len = s.length();
        int cnt_e = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] % 2 == 0){
                cnt_e = i + 1;
                break;
            }
        }
        if (s[len - 1] % 2 == 0)
            cout << 0 << endl;
        else if (cnt_e == 0)
            cout << -1 << endl;
        else if (cnt_e == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
