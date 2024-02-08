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

#define left    (idx << 1)
#define right   ((idx << 1) + 1LL)
#define mid     (lo + ((hi - lo) >> 1))

ll n, q, arr[N], segTree[4 * N];

void build(int idx, int lo, int hi) {
    if (lo == hi) {
        segTree[idx] = arr[lo];
        return;
    }
    build(left, lo, mid);
    build(right, mid + 1, hi);
    segTree[idx] = segTree[left] + segTree[right];
}

ll query(int idx, int lo, int hi, int i, int j) {
    if (i > hi or j < lo) return 0;
    else if (lo >= i and hi <= j) {
        return segTree[idx];
    }
    ll L = query(left, lo, mid, i, j);
    ll R = query(right, mid + 1, hi, i, j);
    return L + R;
}

void solve() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while (q--) {
        // int tp; cin >> tp;
        // if (tp == 1) {
        //     int i, val; cin >> i >> val;
        //     update(1, 1, n, i, val);
        // } else {
        int a, b;   cin >> a >> b;
        cout << query(1, 1, n, a, b) << endl;
        // }
    }
}

int main() {
    unsyncIO;

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}