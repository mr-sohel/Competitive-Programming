#include <bits/stdc++.h>

using namespace std;

const int MOD = 2e5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int t = 1;
	cout << t << '\n';
	for (int i = 1; i <= t; i++) {
		long long x, c;
		x = rng() % 10000000001;
		c = rng() % 31;
		if (x == 0) x++;
		if (c == 0) c++;
		cout << x << ' ' << c << '\n';
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
