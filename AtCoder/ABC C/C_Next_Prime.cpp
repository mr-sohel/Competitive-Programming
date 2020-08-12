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
#define MAX 100003

using namespace std;

vector<int> primes;
bitset<MAX> marked;

void sieve(int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if(!marked[i]) {
            for (int j = i * i; j <= n; j += 2 * i) {
                marked[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if(!marked[i])
            primes.push_back(i);
    }
}

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    return !marked[n];
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    sieve(100003);
    int n;
    cin >> n;
    int t;
    t = n;
    while(!isPrime(t))
        t++;
    cout << t << endl;

    return 0;
}