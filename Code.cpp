#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int a[N], ans[N];

void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	stack<int> st;
	for (int i = 1; i <= n; i++) {
		while (!st.empty() and a[st.top()] >= a[i]) {
			st.pop();
		}
		if (st.empty()) {
			ans[i] = 0;
		} else {
			ans[i] = st.top();
		}
		st.push(i); // pushing index
	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << " ";
	}
}

int main() {
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
