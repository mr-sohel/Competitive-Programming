#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using lll = __int128_t;
using ld = long double;
using ull = unsigned long long;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

ll budget, y;

bool check(ll mid) {
    ll cost = mid * y + sqr(mid / 2) + sqr(ceil(mid / 2.0));
    return cost <= budget;
}

void solve() {
    cin >> budget >> y;
    ll lo = 0, hi = 1e9, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (check(mid)) {
            lo = mid + 1;
            ans = mid;
        } else {
            hi = mid - 1;
        }
    }
    cout << (1LL << ans) << endl;
}

int main() {
    unsyncIO;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}