// C++ program to find 
// (a^b)%m for b very large. 
#include <bits/stdc++.h> 
#define ll long long int 
using namespace std; 

// Function to find power 
ll power(ll x, ll y, ll p) 
{ 
	ll res = 1; // Initialize result 

	// Update x if it is more than or 
	// equal to p 
	x = x % p; 

	while (y > 0) { 
		// If y is odd, multiply x with the result 
		if (y & 1) 
			res = (res * x) % p; 

		// y must be even now 
		y = y >> 1; // y = y/2 
		x = (x * x) % p; 
	} 
	return res; 
} 
// Driver Code 
int main() 
{
    ll a;

    // String input as b is very large
    string b;

    ll remainderB = 0; 
	ll MOD;
    int t;
    cin >> t;
    while(t--) {
    cin >> a >> b >> MOD;

    // Reduce the number B to a small number 
	// using Fermat Little 
	for (int i = 0; i < b.length(); i++) 
		remainderB = (remainderB * 10 + b[i] - '0') % (MOD - 1); 

	cout <<"Result = "<< power(a, remainderB, MOD) << endl; 
    }
	return 0; 
} 
