#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define fi            first
#define se            second
#define sz(x)         (long long)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld) - 1);
const int mod = 1e9 + 7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 2e5 + 5;

using namespace std;

#ifndef LOCAL
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cout << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif


int main() {
#ifdef LOCAL
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;
    int n, x;
    cin >> n >> x;
    int w[n];
    // bool havegondala[n] = {false};
    for (int i = 0; i < n; i++) cin >> w[i];
    sort(w, w + n);
    int i = 0, j = n - 1, cnt = 0;
    while (true) {
        if (i > j) break;
        if (i == j) {
            cnt++;
            break;
        } else if (w[i] + w[j] <= x) {
            cnt++;
            i++, j--;
        } else {
            j--;
            cnt++;
        }
    }
    // for (auto x : havegondala) {
    //     if (!x) cnt++;
    // }
    cout << cnt << endl;

#ifdef LOCAL
    cerr << "Runtime: " << (clock() - tStart) / 1000 << " milliseconds" << endl;
#endif
    return 0;
}
