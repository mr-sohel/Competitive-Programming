// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MX = 1e5 + 5;

ll n, cnt = 0, sum = 0, s, a[MX];

void solve() {
	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> a[i];
	int i = 0, j = 0;
	while (j < n) {
		sum += a[j];
		cnt++;
		while (i < n) {
			if (sum > s) {
				sum -= a[i];
				i++;
			} else break;
		}
		cnt += (j - i);
		j++;
	}
	cout << cnt << endl;
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