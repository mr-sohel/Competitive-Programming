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
 
using namespace std;
 
#define MX 86028122
bitset<MX> marked;
 
vector<int> primes;
 
bool isPrime(long long int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (marked[i] == false) { // i is a prime
            for (int j = i * i; j <= n; j += i) {
                marked[j] = true;
            }
        }
    }
    // 	if you need to store the primes then ->
    	primes.push_back(2);
     	for (int i = 3; i <= n; i += 2) {
             if (marked[i] == false)  // i is a prime
                 primes.push_back(i);
    }
}
 
int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    sieve(86028121);
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << primes[n - 1] << endl;
    }
    return 0;
} 