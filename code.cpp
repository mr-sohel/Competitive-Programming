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

void solve() {
    string s;
    cin >> s;
    set<char> st;
    for (auto &it : s) {
        st.insert(it);
    }
    if (sz(st) == 1) {
        cout << "NO\n";
    } else {
        for (int i = 0; i < sz(s) - 1; i++) {
            if (s[i] != s[i + 1]) {
                swap(s[i], s[i + 1]);
                break;
            }
        }
        cout << "YES\n";
        cout << s << '\n';
    }
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