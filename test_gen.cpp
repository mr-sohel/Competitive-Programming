#include <bits/stdc++.h>

using namespace std;

const int MOD = 2e5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int t = rng() % 5 + 1;
	cout << t << '\n';
	for (int i = 1; i <= t; i++) {
		long long a, b;
		a = rng() % 100;
		b = rng() % 100;
		cout << a << ' ' << b << '\n';
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
