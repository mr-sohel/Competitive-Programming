/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-30 16:51:52
 *	Task:    Same_Parity_Swaps_in_Binary_Strings 
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

int count(string s) {
    int ans = 0;
    for (int i = 0;i < sz(s) - 1;) {
        if (s[i] == '0' and s[i + 1] == '1') {
            ans++;
            i += 2;
        } else {
            i++;
        }
    }
    return ans;
}

string merge(string evens, string odds) {
    string ans = "";
    
    for (int i = 0; i < sz(evens); i++){
        ans += evens[i];
        if (i < sz(odds)) {
            ans += odds[i];
        }
    }
    return ans;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;    
    int t;
    cin >> t;
    while (t--) {
        string s, evens = "", odds = "";
        int n;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evens += s[i];
            } else {
                odds += s[i];
            }
        }
        sort(all(evens));
        sort(all(odds));
        string m1 = merge(evens, odds);
        reverse(all(odds));
        string m2 = merge(evens, odds);
        reverse(all(evens));
        string m3 = merge(evens, odds);
        reverse(all(odds));
        string m4 = merge(evens, odds);
        cout << max({ count(m1), count(m2), count(m3), count(m4) }) << endl;
    }
    return 0;
}