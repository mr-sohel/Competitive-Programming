const int MX = 1e8; // MX upto 10^8
vector<int> primes;
bitset < MX + 5 > mark;

bool isPrime(int n) {
	if (n == 2)
		return true;
	if (n < 2 or n % 2 == 0)
		return false;
	return mark[n] == false;
}
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
