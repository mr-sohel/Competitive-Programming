#include <bits/stdc++.h>
#define endl		'\n'
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)
using ll = long long;
using namespace std;
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;if (p % 2 == 0) {ll ret = BigMod(b,p/2, m);return ((ret % m)*(ret % m))% m;}{return ((b % m)*(BigMod(b, p - 1, m) % m)) % m;}}
//both works.
//binary expo to calculate bigmod

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main() 
{
    unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << binpow(a, b, 10) << endl;
    }
    return 0;
}