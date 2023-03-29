// Link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MX = 1e5 + 5;


ll a[MX], b[MX];
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	ll ans[m], count = 0, i = 0, j = 0;
	while (j < m) {
		ll cnt = 0;
		while (i < n) {
			if (a[i] <= b[j]) {
				if (a[i] == b[j]) {
					cnt++;
				}
			} else break;
			i++;
		}
		if (j != 0 and b[j - 1] == b[j]) {
			ans[j] = ans[j - 1];
			count += ans[j];
		} else {
			ans[j] = cnt;
			count += ans[j];
		}
		j++;
	}
	cout << count << endl;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}