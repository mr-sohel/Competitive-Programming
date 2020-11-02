/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-31 23:11:26
 *	Task:    N_Efficient_Pseudo_Code 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(ll)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const ll MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

#define M 100005
vector<int> primes;  // we'll preload primes once at the beginning
bitset<M> marked;

bool isPrime(ll n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve() {
    for (ll i = 3; i * i <= M; i += 2) {
        if (marked[i] == false) {  // i is a prime
            for (ll j = i * i; j <= M; j += i + i) {
                marked[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (ll i = 3; i <= M; i += 2) {
        if (isPrime(i))
            primes.push_back(i);
    }
}
//optimized algo is
ll divisorSum(ll n) {
    ll total = 1;
    for (ll i = 0; i < primes.size(); i++) {
        ll cnt = 1;
        while (n % primes[i] == 0) {
            n /= primes[i];
            cnt++;
        }
        total *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return total;
}

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    sieve();
    ll t;
    cin >> t;
    ll tc = 1;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll p = pow(n, m);
        ll sum = divisorSum(p);
        //debug(sum);
        sum %= MOD;
        if (sum < 0) sum += MOD;

        cout << "Case " << tc++ << ": " << sum << endl;
        //cout <<sum << endl;
    }
    return 0;
}