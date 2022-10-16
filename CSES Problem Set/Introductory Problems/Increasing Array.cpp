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
const int mx = 2 * 1e5 + 5;
 
 
using namespace std;
 
 
#ifndef ONLINE_JUDGE
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
void print(vector<int> v) {
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}
int main() {
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll res = 0;
    for (int i = 1; i < n ; i++) {
        if (v[i - 1] > v[i]) {
            res += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << res << endl;
#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10Lf\n", (ld) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
