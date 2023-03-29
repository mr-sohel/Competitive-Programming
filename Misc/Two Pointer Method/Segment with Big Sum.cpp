// Link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MX = 1e5 + 5;


int a[MX];

void solve() {
	ll n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> a[i];
	ll sum = 0, ans = INT_MAX, i = 0, j = 0;
	bool flag = false;
	while (j < n) {
		sum += a[j];
		while (sum >= s) {
			ans = min(ans, j - i + 1);
			sum -= a[i];
			i++;
			flag = true;
		}
		j++;
	}
	if (!flag) {
		cout << -1 << endl;
	} else
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