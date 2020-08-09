#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

#define MAX 100000001  // limit is 10^6-1
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
		if (marked[i] == false && i * i <=n) { // i is a prime
			for (int j = i * i; j <= n; j += i) {
				marked[j] = true;
			}
		}
	}
// 	if you need to store the primes then ->
 	primes.push_back(2);
 	for (long long int i = 3; i <= n; i += 2) {
         if (marked[i] == false)  // i is a prime
             primes.push_back(i);
        
       }
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    faster_io;
   
    sieve(100000000);
    //to check n is prime or not
    
    for(int i = 0; i < (int) primes.size(); i += 100) {
		cout<<primes[i]<<endl;
    }   

	return 0;
}

