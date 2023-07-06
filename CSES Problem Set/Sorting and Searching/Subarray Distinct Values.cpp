#include <bits/stdc++.h>

#define endl             '\n'
#define sqr(x)           (x) * (x)
#define gcd(x, y)        __gcd(x, y)
#define lcm(x, y)        ((x / gcd(x, y)) * y)
#define sz(x)            (int)x.size()
#define all(x)           (x).begin(), (x).end()
#define rall(x)          (x).rbegin(), (x).rend()
#define prec(x)          fixed << setprecision(x)
#define min3(a, b, c)    min(a, min(b, c))
#define max3(a, b, c)    max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define testcase         cout << "Case " << tc++ << ": "

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 5;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#endif

int a[N];

void solve() {
  ll n, k, distinct = 0, ans = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) cin >> a[i];
  map<int, int> freq;
  queue<int> Q;
  for (int i = 1; i <= n; i++) {
    freq[a[i]]++;
    Q.push(a[i]);
    if (freq[a[i]] == 1) distinct++;
    while (distinct > k) {
      int front = Q.front();
      Q.pop();
      freq[front]--;
      if (freq[front] == 0) distinct--;
    }
    ans += Q.size();
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
