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

#define MAX 1000001 // limit is 10^6-1. sieve works atmost 10^7-1
vector<long long > primes;
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
		if (marked[i] == false) { // i is a prime
			for (int j = i * i; j <= n; j += 2 * i) {
				marked[j] = true;
			}
		}
	}
	//if you need to store the primes then ->
	primes.push_back(2);
	for (int i = 3; i < n; i += 2) {
        if (marked[i] == false)  // i is a prime
            primes.push_back(i);
	}
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    
    long long int n; 
    cin>>n;
    sieve(n);
    //to check n is prime or not
    bool check = isPrime(n);
    if(check)
		cout<<"Prime"<<endl;
	else
		cout<<"Not Prime"<<endl;
	// to print 1 to n th primes
    for(int i = 0; i < (int) primes.size(); i++) {
		cout<<primes[i] <<' ';
	}
	puts("");
	
	cout<<"Number of primes 1 to "<<n<<" is "<< primes.size() <<endl;
	
}