#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
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

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
int tc = 1;

const ll N = 1e6 + 5;
bitset < N + 5 > mark;
vector<long long>primes;
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
        if (!mark[i])
            primes.push_back(i);
    }
}

void segSieve(ll l, ll r) {
    if (l == 1) l = 2;
    vector<bool> isPrime(r - l + 1);
    for (int i = 0; primes[i] * primes[i] <= r; i++) {
        int currentPrime = primes[i];
        ll start = (l / currentPrime) * currentPrime;
        if (start < l) start += currentPrime;
        for (ll j = start; j <= r; j += currentPrime) {
            isPrime[j - l] = true;
        }
        if (start == currentPrime) isPrime[start - l] = false;
    }
    for (int i = 0; i < r - l + 1; i++) {
        if (!isPrime[i]) cout << (i + l) << endl;
    }
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        segSieve(l, r);
    }
    return 0;
}