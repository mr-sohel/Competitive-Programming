#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef long double ld;
const int MOD = 1e9+7; 
const int MX = 2e5+5; 
const ll INF = 1e18; 
const ld PI = acos((ld)-1);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

#define MAX 1000001  // limit is 10^6-1
vector<long long int> primes;
bitset<MAX> marked; //for memory efficient ,

bool isPrime(long long int n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	return marked[n] == false;
}
void sieve(long long int n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (marked[i] == false) {  // i is a prime
            for (int j = i * i; j <= n; j += 2 * i) {
                marked[j] = true;
            }
        }
    }
    // 	if you need to store the primes then ->
    primes.push_back(2);
    for (int i = 3; i < n; i += 2) {
        if (marked[i] == false)  // i is a prime
            primes.push_back(i);
    }
}

/* not so optimized
int countDivisor (int n) {
	int divisor = 0;
	for(int i = 1; i*i <= n; i++) {
		if(i*i == n)
			divisor += 1;
		else if(n % i == 0)
			divisor += 2;	
	}
	return divisor;
}
*/

//optimized algo is using prime factorization

//vector<ll> primes; // we'll preload primes once at the beginning
ll countDivisor(ll n) {
	ll divisor = 1;
	int root = sqrt(n);
	for (int i = 0; i < (int)primes.size() && primes[i] <= root; i++)
	{
		if (n % primes[i] == 0) {
			int cnt = 1;
			while (n % primes[i] == 0) {
				cnt++;
				n /= primes[i];
			}
			divisor *= cnt;
			root = sqrt(n);
		}
	}
	if(n > 1)
		divisor *= 2;
	return divisor;
}

int main()
{
	//freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
	ll n, divisor;
	cin >> n;
	int sqrtN = (int)sqrt(n) + 1;
	sieve(sqrtN);
	primes.push_back(2);
	for (int i = 3; i <= sqrtN; i += 2)
	{
		if (isPrime(i))
			primes.push_back(i);
	}

	divisor = countDivisor(n);
    cout<<"Total Divisor of "<<n<<" is "<<divisor<<endl;
    
    return 0;
}

