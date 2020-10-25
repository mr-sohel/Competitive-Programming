/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-25 20:25:48
 *	Task:    C_Sum_of_product_of_pairs 
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

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    ll n;
    cin >> n;
    ll sum = 0;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sum += A[i];
        sum %= MOD;
    }
   // debug(sum);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        // debug2(sum, ans);
        // debug(A[i]);
        sum -= A[i];
        if (sum < 0) sum += MOD;
        ans += A[i] * sum;
        ans %= MOD;
    }
    cout << ans<< endl;
    return 0;
}
