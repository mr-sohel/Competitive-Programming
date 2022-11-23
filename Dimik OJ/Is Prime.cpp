#include <iostream>
#include <math.h>
using namespace std;

int isprime(long long n) {
    int i;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (isprime(n))
            cout << n << " is a prime" << endl;
        else
            cout << n << " is not a prime" << endl;
    }
    return 0;
}