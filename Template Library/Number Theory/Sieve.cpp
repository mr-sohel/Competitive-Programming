const int N = 1e6;
bitset < N + 5 > mark;
vector<ll>primes;
void sieve() {
    int sq = sqrt(N);
    for (int i = 4; i <= N; i += 2) {
        mark[i] = true;
    }
    for (int i = 3; i <= sq; i += 2) {
        if (!mark[i]) {
            for (int j = i * i; j <= N; j += (i << 1)) {
                mark[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!mark[i])
            primes.push_back(i);
    }
}
bool isPrime(int n) {
    if (n < 2) return false;
    return !mark[n];
}