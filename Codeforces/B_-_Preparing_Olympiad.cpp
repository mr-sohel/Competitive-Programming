/**
 *  Author  : Mr_Sohel
 *  Task    :
 *  Algo    :
**/
#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mk            make_pair
#define fi            first
#define se            second
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define min3(a,b,c)   min(a,min(b,c))
#define max3(a,b,c)   max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;

#ifdef LOCAL
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | ";
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    for (int i = 0; i < (1 << n); i++) {
        int total = 0, lowest = INT_MAX, highest = INT_MIN, cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                total += a[j];
                lowest = min(lowest, a[j]);
                highest = max(highest, a[j]);
                cnt++;
            }
        }
        if (cnt >= 2 and (highest - lowest) >= x and total >= l and total <= r)
            res++;
    }
    cout << res << endl;

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}
