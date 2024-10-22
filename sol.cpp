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
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int a[N];
ll tree[4 * N];

#define left   (node * 2)
#define right   (node * 2 + 1)
#define mid    ((lo + hi) >> 1)


void build(int node, int lo, int hi) {
   if (lo == hi) {
      tree[node] = a[lo];
      return;
   }
   build(left, lo, mid);
   build(right, mid + 1, hi);
   tree[node] = (tree[left] + tree[right]);
}

ll query(int node, int lo, int hi, int L, int R) {
   if (L > hi or R < lo) return LONG_MAX;
   if (L <= lo and hi <= R) return tree[node];
   ll leftQuery = query(left, lo, mid, L, R);
   ll rightQuery = query(right, mid + 1, hi, L, R);

   return min(leftQuery, rightQuery);
}

void update(int node, int lo, int hi, int i, int val) {
   if (i > hi or i < lo) return;
   if (i <= lo and hi <= i) {
      tree[node] = val;
      return;
   }
   update(left, lo, mid, i, val);
   update(right, mid + 1, hi, i, val);
   tree[node] = (tree[left] + tree[right]);
}

void solve() {
   int n, q;   cin >> n >> q;
   for (int i = 1; i <= n; i++) cin >> a[i];
   build(1, 1, n);

   while (q--) {
      int tp;   cin >> tp;
      if (tp == 1) {
         int k, u;   cin >> k >> u;
         update(1, 1, n, k, u);
      }
      else {
         int a, b;   cin >> a >> b;
         cout << query(1, 1, n, a, b) << endl;
      }
   }
}
int main() {
   unsyncIO;

   int t = 1;
   //cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}