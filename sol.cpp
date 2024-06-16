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
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

bool check(int n);
const int N = 1e6; // upto 1e8
bitset < N + 5 > mark;
vector<ll>primes;
void sieve() {
   int sq = sqrt(N);
   for (int i = 4; i <= N; i += 2) {
      mark[i] = true;
   }
   for (int i = 3; i <= sq; i += 2) {
      if (!mark[i]) {
         for (int j = i * i; j <= N; j += (i << 1)) {
            mark[j] = true;
         }
      }
   }
   primes.push_back(2);

   for (int i = 3; i <= N; i += 2) {
      if (!mark[i] and check(i))
         primes.push_back(i);
   }
}
bool isPrime(int n) {
   if (n < 2) return false;
   return !mark[n];
}
bool check(int n) {
   if (n < 10) return true;
   string temp = to_string(n);
   for (auto &it : temp) {
      if (it == '0') return false;
   }
   while (sz(temp) >= 1) {
      if (isPrime(stoi(temp)) == false) return false;
      temp = temp.substr(1, sz(temp));
   }
   return true;
}


void solve() {
   int k; cin >> k;
   int lo = 0, hi = sz(primes) - 1, ans = -1;
   while (lo <= hi) {
      int mid = lo + ((hi - lo) / 2);
      if (primes[mid] > k) {
         hi = mid - 1;
         ans = mid;
      } else {
         lo = mid + 1;
      }
   }
   cout << lo << '\n';
}

int main() {
   unsyncIO;
   sieve();
   int t = 1;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}