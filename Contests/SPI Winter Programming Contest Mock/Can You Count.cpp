/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-27 16:09:08
 *	Task:    test
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
	int n, cnt = 0;
    cin >> n;
    int one = 0, two = 0, three = 0;
    for (int i = 0;i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 4)
            cnt++;
        else if (temp == 3) {
            three++;
            cnt++;
        }
        else if (temp == 2)
            two++;
        else if (temp == 1)
            one++;
 
    }
    one = one - three;
    if (two % 2 == 0) {
        cnt += two / 2;
    }
    else {
        cnt += two / 2 + 1;
        one -= 2;
    }
    if (one > 0) {
        if (one % 4 == 0) {
            cnt += one / 4;
        }
        else
            cnt+=one/4+1;
    }
    cout << cnt << endl;
    return 0;
}
