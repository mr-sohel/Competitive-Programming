#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e3 + 7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int n = rng() % 5 + 2; // generate number of testcases less than 1000
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		int N = rng() % 10 + 10;
		int K = rng() % N + N;
		int P = rng() % MOD;
		cout << N << " " << K << " " << P << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
