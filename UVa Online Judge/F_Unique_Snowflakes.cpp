/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-05 18:28:15
 *	Task:    F_Unique_Snowflakes 
**/
#include <bits/stdc++.h>
#define endl        '\n'
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

typedef double 			   db;
typedef long double 	   ld;
typedef long long          ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;
inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    unsyncIO;
    //ld stime = gett();
    ll t;
    cin >> t;
    while (t--) {
        int n, x, ans, cnt, temp;
        map<int, int> mp;
        cin >> n;
        ans = 0, cnt = 0, temp = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            int lx = mp[x];
            if (lx != 0) {
                temp = max(temp, lx);
                cnt = i - temp - 1;
            }
            cnt++;
            mp[x] = i;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
        //cerr << "Time: " << gett() - stime << endl;
    }
    return 0;
}