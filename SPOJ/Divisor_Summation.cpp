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
#define M 500001
using namespace std;

vector<int> primes;
bitset<M> mark;
/*
ll sumDivisor(int n) {
	int sum = 0;
	if (n < 2) return 0;
	for(ll i = 1; i < n; i++) {
		if(n % i == 0) {
				sum += i;
			}
	}
	return sum;
}
*/

void sieve(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (mark[i] == false) { // i is a prime
            for (int j = i + i; j <= n; j += i ) {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
        if (mark[i] == false)  // i is a prime
            primes.push_back(i);
}

bool isPrime(int n) {
    if (n < 2) return false;
    return !mark[n];
}
int divisorSum(int n) {
	int temp = n;
    if (n < 2) return 0;
    int total = 1;
    for (int i = 0; n != 1; i++) {
        int cnt = 1;
        while(n % primes[i] == 0) {
            n /= primes[i];
            cnt++;
        }
        total *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return total - temp;
}

int main()
{
	//freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
	sieve(500000);
	int n,t;
	cin >>t;
	while(t--) {
		cin >> n;
		cout<<divisorSum(n)<< endl;
    }
    return 0;
}

// 0.33 solution is here. -> but not mine.

/* #include <bits/stdc++.h>
#define endl '\n'
#define pi 2 * acos(0.0)
#define pb(a) push_back(a)
#define db double
#define ld long double
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define inf 1000000000000000001
#define sqr(x) (x) * (x)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define unsyncIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;
int sol(int n)
{
    if (n < 2)
        return 0;
    int cnt = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (i * i == n)
            cnt += i;
        else if (n % i == 0)
            cnt += i, cnt += (n / i);
    }
    return cnt;
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << sol(x) << endl;
    }
    return 0;
}
 */
