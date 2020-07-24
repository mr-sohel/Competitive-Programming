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
#define MX 1000001

bitset<MX> marked;

void sieve() {
    for (int i = 3; i*i <= MX; i += 2) {
        if(marked[i] == false) {
            for (int j = i * i; j <= MX; j += i) {
                marked[j] = true;
            }
        }
    }
}

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    return marked[n] == false;
}



int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    sieve();
    unsyncIO;
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if(isPrime(num))
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }

        return 0;
}