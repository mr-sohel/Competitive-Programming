// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MX = 1e5 + 5;

int a[MX], b[MX], c[MX];
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	int i = 0, j = 0, k = 0;
	while (i < n and j < m) {
		if (a[i] < b[j]) {
			c[k++] = a[i++];
		} else {
			c[k++] = b[j++];
		}
	}
	while (i < n) {
		c[k++] = a[i++];
	}
	while (j < m) {
		c[k++] = b[j++];
	}
	for (int i = 0; i < n + m; i++) cout << c[i] << " ";
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