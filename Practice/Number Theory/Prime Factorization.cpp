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
#define M 1000001
bitset<M> marked;
vector<int> primes;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve(int n)
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)
        { // i is a prime
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }
}

int List[128]; //save the list
int listSize;
void primeFactorize(int n) {
    listSize = 0;
    int sqrtN = int(sqrt(n));
    for (int i = 0; primes[i] <= sqrtN; i++)
    {
        if(n % primes[i] == 0) {
            while(n % primes[i] == 0) {
                n /= primes[i];
                List[listSize] = primes[i];
                listSize++;
            }
        }
    }
    if(n > 1) {
        List[listSize] = n;
        listSize++;
    }
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n;
    cin >> n;
    int sqrtN = (int)sqrt(n) + 1;
    sieve(sqrtN);
    primes.push_back(2);
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if (isPrime(i))
            primes.push_back(i);
    }
    
    primeFactorize(n);
    for (int i = 0; i < listSize; i++)
        printf("%d ", List[i]);
    return 0;
}
