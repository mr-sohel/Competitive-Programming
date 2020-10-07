#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef long double ld;
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);

using namespace std;

#define M 500001
vector<int> primes; // we'll preload primes once at the beginning
bitset<M> marked;

bool isPrime(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve() {
    for (int i = 3; i * i <= M; i += 2) {
        if (marked[i] == false) { // i is a prime
            for (int j = i * i; j <= M; j += i + i) {
                marked[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= M; i += 2)
    {
        if (isPrime(i))
            primes.push_back(i);
    }
}
//optimized algo is
int divisorSum(int n) {
    int total = 1;
    for (int i = 0; i < primes.size(); i++) {
        int cnt = 1;
        while(n % primes[i] == 0) {
            n /= primes[i];
            cnt++;
        }
        total *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return total;
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n;
    cin >> n;
    //int sqrtN = (int)sqrt(n) + 1;
    sieve();
    

    cout << "Sum of Divisors is " << divisorSum(n)<<endl;

    return 0;
}
