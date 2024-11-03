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

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const int N = 2e5 + 5;
int tc = 1;
bool isValid(string &s, int i) {
    return i >= 0 && i + 3 < sz(s) && s.substr(i, 4) == "1100";
}
void solve() {
    string s;
    int q;
    cin >> s >> q;
    int ans = 0, n = sz(s);
    vector<bool> flag(n + 1, false);
    for (int i = 0; i + 3 < n; ++i) {
        if (isValid(s, i)) {
            flag[i] = true;
            ans++;
        }
    }
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        pos--;
        if (s[pos] == char(val)) {
            cout << (ans > 0 ? "YES" : "NO") << '\n';
            continue;
        }
        s[pos] = '0' + val;
        for (int i = pos - 3; i <= pos; ++i) {
            if (i >= 0 && i + 3 < sz(s)) {
                if (flag[i]) ans--;
                flag[i] = isValid(s, i);
                if (flag[i]) ans++;
            }
        }
        cout << (ans > 0 ? "YES" : "NO") << '\n';
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