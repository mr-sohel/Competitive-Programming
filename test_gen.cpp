#include <bits/stdc++.h>

using namespace std;

const int MOD = 31;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	for (int i = 0; i < 30; i++) {
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
