#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define sqr(x) (x) * (x)
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define prec(x) fixed << setprecision(x)
#define testcase cout << "Case " << tc++ << ": "
#define unsyncIO                \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr)

using namespace __gnu_pbds;
using namespace std;

template <class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;
using lll = __int128_t;
using ld = long double;
using ull = unsigned long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

const ld PI = acos(-1.0l);
const ll MOD = 1e9 + 7;
const ll INF = 2e18;
const ld EPS = 1e-9;
const int N = 2e5 + 5;

void solve() {
   int N;
   cin >> N;
   vector<long long> a(N);
   for (int i = 0; i < N; ++i) cin >> a[i];

   vector<long long> dp(N + 2, 0);
   vector<long long> suffix(N + 2, 0);
   for (int i = N - 1; i >= 0; --i) {
      suffix[i] = a[i] + suffix[i + 1];
   }
   for (int i = N - 1; i >= 0; --i) {
      // Option 1: take one coin
      long long take1 = a[i] + (suffix[i + 1] - dp[i + 1]);
      // Option 2: take two coins (if possible)
      long long take2 = (i + 1 < N) ? (a[i] + a[i + 1] + (suffix[i + 2] - dp[i + 2])) : a[i];
      dp[i] = max(take1, take2);
   }
   cout << dp[0] << "\n";
}

int main() {
    unsyncIO;
    solve();
    return 0;
}