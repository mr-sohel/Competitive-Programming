/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-25 18:48:29
 *	Task:    B_Substring 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s, t;
    cin >> s >> t;
    int ans = sz(t);
    int minMove = 0;
    if (s.find(t) != string::npos) {
        cout << 0 << endl;
    } else {
        int k;
        for (int i = 0; i < (s.length() - t.length())+1; i++) {
            for (int j = 0 , k = i; j < t.length(); k++, j++) {
                //debug2(s[k], t[j]);
                if (s[k] != t[j]) {
                    minMove++;
                }
            }
            ans = min(ans, minMove);
            minMove = 0;
        }
        cout << ans << endl;
    }

    return 0;
}
