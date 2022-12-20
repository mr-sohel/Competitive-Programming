const int MX = 1e5; //sqrt(r)+1000 is enough
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

void segSieve(ll l, ll r) {
    if (l == 1) l = 2;
    vector<bool> isPrime(r - l + 1);
    for (int i = 0; primes[i] * primes[i] <= r; i++) {
        int currentPrime = primes[i];
        ll start = (l / currentPrime) * currentPrime;
        if (start < l) start += currentPrime;
        for (ll j = start; j <= r; j += currentPrime) {
            isPrime[j - l] = true;
        }
        if (start == currentPrime) isPrime[start - l] = false;
    }
    for (int i = 0; i < r - l + 1; i++) {
        if (!isPrime[i]) cout << (i + l) << endl;
    }
    cout << endl;
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }
    return 0;
}