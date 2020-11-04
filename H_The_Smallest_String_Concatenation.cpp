/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-04 22:27:01
 *	Task:    H_The_Smallest_String_Concatenation 
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

typedef double db;
typedef long double ld;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;
bool cmp(string a, string b) {
    return a + b < b + a;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    //ld stime = gett();

    string ans;
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a), cmp);
    for(auto x: a)
        ans += x;
    cout << ans << endl;
    //cerr << "Time: " << gett() - stime << endl;
    return 0;
}
