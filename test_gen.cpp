#include <bits/stdc++.h>

using namespace std;

const int MOD = 2e5;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int t = 1;
	cout << t << '\n';
	for (int i = 1; i <= t; i++) {
		long long n;
		n = rng() % 7;
		if (n == 0) n = 1;
		cout << n << '\n';
		std::string result;
		result.reserve(n);

		// Use random device and uniform distribution
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 1); // 0 or 1

		for (int i = 0; i < n; ++i) {
			char randomChar = (dis(gen) == 0) ? 'a' : 'b';
			result += randomChar;
		}

		cout << result << '\n';
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
