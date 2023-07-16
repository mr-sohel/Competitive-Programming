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

int countDivisor(ll n) {
	int divisor = 1;
	for (int i = 0; primes[i] * primes[i] <= n; i++) {
		ll cnt = 1;
		if (n % primes[i] == 0) {
			while (n % primes[i] == 0) {
				cnt++;
				n /= primes[i];
			}
			divisor *= cnt;
		}
	}
	if (n > 1)
		divisor *= 2;
	return divisor;
}

