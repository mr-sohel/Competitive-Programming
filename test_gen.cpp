#include <bits/stdc++.h>

using namespace std;

const int MOD = 2e5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int n = rng() % MOD;
	int k = rng() % n;
	cout << n << ' ' << k << '\n';
	for (int i = 0; i < n; i++) {
		int N = rng() % MOD;
		cout << N << " ";
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		int N = rng() % MOD;
		cout << N << " ";
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
