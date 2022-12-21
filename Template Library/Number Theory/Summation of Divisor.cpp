const int MX = 5e5 + 5; // MX upto 10^8
vector<int> primes;
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
int divisorSum(int n) {
    if (n < 2) return 0;
    int total = 1;
    for (int i = 0; n != 1; i++) {
        int cnt = 1;
        while (n % primes[i] == 0) {
            n /= primes[i];
            cnt++;
        }
        total *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
    }
    return total;
}