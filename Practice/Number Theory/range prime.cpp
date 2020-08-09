#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	if(n < 2)
		return false;
	else if(n == 2)
		return true;
	else if(n % 2 == 0) // the only even prime is 2; so we don't need to check other evens
		return false;
		
	for(int i = 3; i <= sqrt(n); i += 2) {
		if(n % i == 0)
			return false;
		}
		return true;
}

int main()
{
	int n;
	cin>>n;
	vector<int> primes;
	for(int i = 1; i <= n; i++) {
		if(isPrime(i))
			primes.push_back(i);
	}
	for(int i = 0; i < (int) primes.size(); i++)
		cout<<primes[i] <<' ';
	cout<<"\n"<<primes.size();
	return 0;
}
