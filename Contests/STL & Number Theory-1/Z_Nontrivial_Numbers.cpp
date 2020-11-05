/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-05 23:08:24
 *	Task:    Z_Nontrivial_Numbers 
**/
#include <bits/stdc++.h>
#define endl        '\n'
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

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const ll MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;
inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;

#define MAX 1000005 // limit is 10^6-1. sieve works atmost 10^7-1
vector<long long> primes;
bitset<MAX> marked;  //for memory efficient ,

bool isPrime(long long n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve() {
    for (ll i = 3; i * i <= MAX; i += 2) {
        if (marked[i] == false) {  // i is a prime
            for (ll j = i * i; j <= MAX; j += 2 * i) {
                marked[j] = true;
            }
        }
    }
    //if you need to store the primes then ->
    primes.push_back(2);
    for (ll i = 3; i < MAX; i += 2) {
        if (marked[i] == false)  // i is a prime
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
    return total - n;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    //ld stime = gett();
    sieve();
    ll i, j;
    cin >> i >> j;
    if (i == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (i == j) {
        cout << i << endl;
        return 0;
    }
    vector<pair<double, ll> > v;
    for (ll k = j; k >= i; k--) {
        
        if(isPrime(k)) {
            cout << k << endl;
            return 0;
        } else {
                ll sum;
                sum = divisorSum(k);
                double tmp =(double) sum / k;
                //debug2(sum, tmp);
                v.pb(make_pair(tmp, k));
        }
    }
    sort(all(v));
    cout << v[0].second << endl;
    
    //cerr << "Time: " << gett() - stime << endl;
    return 0;
}
