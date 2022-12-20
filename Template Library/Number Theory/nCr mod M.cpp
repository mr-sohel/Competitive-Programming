/**
 *  Author:  Sohel Rana
 *  Date:    2020-11-06 22:57:29
 *  Task:    nCr Mod M
**/
#include <bits/stdc++.h>
using namespace std;
#define endl        '\n'
using ll = long long;
const int MOD = 1000003;
const int mx = 1e6 + 2;

ll BigMod(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}
ll ModInverse(ll number, ll mod) {return BigMod(number, mod - 2, mod);}

ll fact[mx];

void pre() {
    int i;
    fact[0] = 1;
    for (i = 1; i < mx; i++) {
        fact[i] = ((fact[i - 1] % MOD) * (i % MOD)) % MOD;
    }
}

int main() {
    pre();
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        ll n, r, ans;
        cin >> n >> r;
        ll fact1 = fact[n] % MOD; // n!
        ll fact2 = ((fact[r] % MOD) * (fact[n - r] % MOD)) % MOD; // r!*(n-r)!
        ans = (fact1 * ModInverse(fact2, MOD)) % MOD;
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
