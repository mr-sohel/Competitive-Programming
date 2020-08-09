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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define all(x)      (x).begin(), (x).end()
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;
#define MAX 1000

bitset<1001> marked;

void sieve() {
    for (int i = 3; i * i < MAX; i += 2) {
        if(marked[i] == false) {
            for (int j = i * i ; j <= MAX; j+= 2*i) {
                marked[j] = true;
            }
        }
    }
}
bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    return marked[n] == false;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    sieve();
    int n,p = 0,np = 0, ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(isPrime(temp)) {
            p++;
        }
    }
    np = n - p;
    if(p > np) {
        cout << n / 2 << endl;
    }
    else if (p <= np){
        cout << p << endl;
    }

    return 0;
}