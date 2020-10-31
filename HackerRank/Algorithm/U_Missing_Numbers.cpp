/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-30 18:08:23
 *	Task:    U_Missing_Numbers 
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

void solve() {
    int n, m;
    cin >> n;
    set<int> ans;
    vector<int> arr(n);
    vector<int> freq1(200000, 0), freq2(200000, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; i++) cin >> brr[i];
    for (int i = 0; i < n; i++) {
        freq1[arr[i]]++;
    }
    for (int i = 0; i < m; i++) {
        freq2[brr[i]]++;
    }
    for (int i = 0; i < m; i++) {
        if(freq2[brr[i]] > freq1[brr[i]]) {
            ans.insert(brr[i]);
        }
    }
    for(auto x: ans)
        cout << x << ' ';
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    solve();
    return 0;
}
