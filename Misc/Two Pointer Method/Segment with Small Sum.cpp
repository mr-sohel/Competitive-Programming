//Link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int MX = 1e5 + 5;

int a[MX];

void solve() {
	ll n, s, sum = 0, ans = 0, i = 0, j = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> a[i];
	while (j < n) {
		sum += a[j];
		while (sum > s) {
			sum -= a[i];
			i++;
		}
		ans = max(ans, j - i + 1);
		j++;
	}
	cout << ans << endl;
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