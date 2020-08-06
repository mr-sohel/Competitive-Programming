#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;
 
bitset<MAX> marked;
vector<int> primes;
 
void sieve() {
    for (int i = 3; i * i <= MAX; i += 2) {
        if(marked[i] == false) {
            for (int j = i * i; j <= MAX; j += 2 * i) {
                marked[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if(marked[i] == false)
            primes.push_back(i);
    }
}
/* void sieve(){
    prime.push_back(2);
    for(int i = 3; i <= M; i += 2){
        if(marked[i] == false){
            prime.push_back(i);
            for(int j = i * i; j <= M; j += i+i){
                marked[j] = true;
            }
        }
    }
} */
 
void segSieve(ll l, ll r) {
    if(l == 1)
        l = 2;
    bool isPrime[r - l + 1];
    for (int i = 0; i < r - l + 1; i++) isPrime[i] = true;
    for (int i = 0; primes[i] * primes[i] <= r; i++) {
        int currentPrime = primes[i];
        ll base = (l / currentPrime) * currentPrime;
        if(base < l) base += currentPrime;
        for (ll j = base; j <= r; j += currentPrime) {
            isPrime[j - l] = false;
        }
        if(base == currentPrime) isPrime[base-l] = true;
    }
    for (int i = 0; i < r - l + 1; i++) {
        if(isPrime[i]) cout<<(i+l)<<endl;
    }
    cout << endl;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    sieve();
    int t;
    cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }
 
    return 0;
} 