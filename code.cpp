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
const ll N = 1e7;
int tc = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

vector<int> phi(N + 1, 0);
void phi_1_to_n() {
    for (int i = 0; i <= N; i++)
        phi[i] = i;

    for (int i = 2; i <= N; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= N; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}



void solve() {
    int n;
    while (cin >> n and n) {
        cout << phi[n] << '\n';
    }
}

int main() {
    unsyncIO;
    phi_1_to_n();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}