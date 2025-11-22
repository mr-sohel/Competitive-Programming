#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios::sync_with_stdio(false); cin.tie(nullptr)

using namespace __gnu_pbds;
using namespace std;

template <class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
void solve(){
   ll n, x = 0;
   cin >> n;
   for (int i = 1; i <= n; i++){
      ll val;
      cin >> val;
      x ^= (val % 3);
   }
   cout << (x ? "First\n" : "Second\n");
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