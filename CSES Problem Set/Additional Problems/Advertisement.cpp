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

ll ara[N], Right[N], Left[N];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> ara[i];
  stack<int> leftStack, rightStack;

  leftStack.push(0);
  for (int i = 1; i <= n; i++) {
    while (!leftStack.empty() and ara[leftStack.top()] >= ara[i]) {
      leftStack.pop();
    }
    Left[i] = leftStack.top();
    leftStack.push(i);
  }
  rightStack.push(n + 1);

  for (int i = n; i >= 1; i--) {
    while (!rightStack.empty() and ara[rightStack.top()] >= ara[i]) {
      rightStack.pop();
    }
    Right[i] = rightStack.top();
    rightStack.push(i);
  }
  ll MAX = INT_MIN;
  for (int i = 1; i <= n; i++) {
    ll height = ara[i];
    ll width = Right[i] - Left[i] - 1;
    ll area = height * width;
    MAX = max(area, MAX);
  }
  cout << MAX << endl;
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
