#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e5 + 7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int n = rng() % 1000; // generate number of testcases less than 1000
	cout << n << endl;
	for (int i = 1; i <= n; i++) {
		cout << rng() % MOD << endl; // generate n random number in each test case less than MOD
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
