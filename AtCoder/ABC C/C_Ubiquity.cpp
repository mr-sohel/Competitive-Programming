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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

ll func(ll x , ll y) {
    ll ans = 1;
    while(y > 0) {
        if (y % 2 == 1)
            ans = ans * x % MOD;
        x = x * x % MOD;
        y /= 2;
    }
    return ans;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    int n;
    cin >> n;
    ll ans;
    ans = func(10, n) - (func(9, n) * 2 - func(8, n));
    ans = ans % MOD;
    if(ans < 0)
        ans += MOD;
    cout << ans << endl;
    return 0;
}
