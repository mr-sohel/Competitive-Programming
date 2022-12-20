const int MX = sqrt(1e6) + 6; // sqrt(10^9) is enough, but MX can upto 10^8
vector<int> primes;
bitset < MX + 5 > mark;

void sieve() { //prime gen upto 10^8
	int sq = sqrt(MX);
	for (int i = 3; i <= sq; i += 2)
		if (!mark[i] && (i * i) <= MX) {
			for (int j = i * i; j <= MX; j += (i << 1))
				mark[j] = true;
		}
// 	if you need to store the primes then ->
	primes.push_back(2);
	for (int i = 3; i <= MX; i += 2) {
		if (mark[i] == false)
			primes.push_back(i);
	}
}

int countDivisor(int n) {
	int divisor = 1;
	for (int i = 0; primes[i] * primes[i] <= n; i++) {
		int cnt = 1;
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
