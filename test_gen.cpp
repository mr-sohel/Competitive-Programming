#include <bits/stdc++.h>

using namespace std;

const int MOD = 2e5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	cout << 10000 << '\n';
	for (int  i = 1; i <= 10000; i++) {
		cout << i << ' ';
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
