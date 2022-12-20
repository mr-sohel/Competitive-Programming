const int MX = 32000; // sqrt(10^9)
vector<int> primes, factors;
bitset < MX + 5 > mark;

void sieve() {
    int sq = sqrt(MX);
    for (int i = 3; i <= sq; i += 2)
        if (!mark[i] && (i * i) <= MX) {
            for (int j = i * i; j <= MX; j += (i << 1))
                mark[j] = true;
        }
    primes.push_back(2);
    for (int i = 3; i <= MX; i += 2) {
        if (mark[i] == false)
            primes.push_back(i);
    }
}

void primeFactorize(int n) {
    for (int i = 0; primes[i] * primes[i] <= n; i++) {
        if (n % primes[i] == 0) {
            while (n % primes[i] == 0) {
                n /= primes[i];
                factors.push_back(primes[i]);
            }
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
}