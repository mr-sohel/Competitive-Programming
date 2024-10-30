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
using ld = long double;
using ull = unsigned long long;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ll N = 4e5 + 5; //
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define left   (node * 2)
#define right   (left + 1)

ll n, tree[4 * N], cnt[4 * N], sorted[N];

void build(int node, int lo, int hi) {
    tree[node] = 0;
    cnt[node] = 0;
    if (lo == hi) return;
    ll mid = (lo + hi) >> 1;
    build(left, lo, mid);
    build(right, mid + 1, hi);
}

void update(int node, int lo, int hi, int i, int val) {

    if (i > hi or i < lo) return;
    if (i <= lo and hi <= i) {
        cnt[node] = 1;
        tree[node] = val;
        return;
    }

    ll mid = (lo + hi) >> 1;
    update(left, lo, mid, i, val);
    update(right, mid + 1, hi, i, val);
    cnt[node] = cnt[left] + cnt[right];
    tree[node] = tree[left] + tree[right];
}

pair<ll, int> query(int node, int lo, int hi, int L, int R) {
    if (L > hi or R < lo) return {0LL, 0};
    if (L <= lo and hi <= R) return {tree[node], cnt[node]};
    ll mid = (lo + hi) >> 1;
    auto leftQuery = query(left, lo, mid, L, R);
    auto rightQuery = query(right, mid + 1, hi, L, R);
    leftQuery.first += rightQuery.first;
    leftQuery.second += rightQuery.second;
    return leftQuery;
}

bool check(ll a, ll b, ll mid) {
    auto p = query(1, 1, n, 1, mid);
    return (a * (p.second + 1)) >= (p.first + b);
    // min(a1,a2,a2...am) * m >= (b1+b2+b3..+bm)
}

ll BS(int a, int b) {
    ll lo = 1, hi = n, res = -1;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (check(a, b, mid)) {
            lo = mid + 1;
            res = mid;
        } else {
            hi = mid - 1;
        }
    }
    if (res == -1) return 0;
    return query(1, 1, n, 1, res).second + 1;
}


void solve() {
    cin >> n;
    pair<int, int> a[n + 1];
    vector < pair<int, int>> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1 ; i <= n; i++) {
        b[i].first = a[i].second;
        b[i].second = i;
    }
    sort(all(b));

    for (int i = 1; i <= n; i++) {
        sorted[b[i].second] = i;
    }
    // for (int i = 1; i <= n; i++) {
    //    cout << sorted[i] << ' ';
    // }
    // cout << '\n';
    build(1, 1, n);
    ll ans = 0;
    for (int i = n; i >= 1; i--) {
        int idx = sorted[i];
        ll MaxWithFixedMin = BS(a[i].first, a[i].second);
        ans = max(ans, MaxWithFixedMin);
        update(1, 1, n, idx, a[i].second);
    }
    cout << ans << '\n';
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