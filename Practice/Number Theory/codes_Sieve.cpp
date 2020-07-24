#include<bits/stdc++.h>
#define M 1000000

using namespace std;
vector<int> primes;
bitset<M> mark;
void sieve(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (mark[i] == false) { // i is a prime
            for (int j = i + i; j <= n; j += i ) {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (mark[i] == false)  // i is a prime
            primes.push_back(i);
	}
}

bool isPrime(int n) {
    if (n < 2) return false;
    return !mark[n];
}

int main() {
    int n;
    cin >> n;
    sieve(n);
    if(isPrime(n))
		cout<<"Prime";
	else
		cout<<"Not Prime";
    //for (int i = 0; i < (int)primes.size(); i++)
        //cout << primes[i] << '\n';
}
