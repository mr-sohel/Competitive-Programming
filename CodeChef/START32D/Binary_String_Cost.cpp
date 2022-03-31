/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-31 14:35:12
 *	Task:    Binary_String_Cost 
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

bool ck01, ck10;
void check(string s) {
    for (int i = 0;i < sz(s) - 1; i++){
        if (s[i] == '0' and s[i + 1] == '1') {
            ck01 = true;
        }
        if (s[i] == '1' and s[i + 1] == '0') {
            ck10 = true;
        }
    }
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        ck01 = 0, ck10 = 0;
        int n, x, y;
        cin >> n >> x >> y;
        string s, s1;
        cin >> s;
        s1 = s;
        sort(all(s));
        sort(rall(s1));
        check(s);
        check(s1);
        if (ck01 and ck10) {
            cout << min(x, y) << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}