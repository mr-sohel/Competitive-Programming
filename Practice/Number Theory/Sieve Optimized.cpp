#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

#define MAX 1000001  // limit is 10^6-1. sieve works atmost 10^7-1
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
int sieve(long long int n) {
	int total = 0;
	for (int i = 3; i * i <= n; i += 2) {
		
		if (marked[i] == false) { // i is a prime
			total++;
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
	return total;
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    
    long long int n; 
    cin>>n;
    int t = sieve(n);
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
	
	cout<<"Number of primes 1 to "<<n<<" is "<< t <<endl;
	

	return 0;
}
