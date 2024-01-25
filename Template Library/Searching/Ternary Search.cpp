#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
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
const ld EPS = 1e-9;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

ld b, c;

ld func(ld x) {
    return (x * x + b * x + c) / sin(x);
}

void solve() {
    cin >> b >> c;
    ld lo = 0, hi = PI / 2.0;
    for (int i = 0; i < 60; i++) {
        ld m1 = lo + (hi - lo) / 3;
        ld m2 = hi - (hi - lo) / 3;
        if (func(m1) < func(m2)) {
            hi = m2;
        } else {
            lo = m1;
        }
    }
    cout << prec(10) << func(lo) << '\n';
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