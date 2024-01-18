/**
 *    author:  tourist
 *    created: 21.11.2022 18:33:54
**/
#include <bits/stdc++.h>

using namespace std;

// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		int beg = 0;
		while (beg < n) {
			int end = beg;
			while (end + 1 < n && a[end + 1] == a[end]) {
				end += 1;
			}
			if (beg == 0 || a[beg - 1] > a[beg]) {
				if (end == n - 1 || a[end + 1] > a[end]) {
					cnt += 1;
				}
			}
			beg = end + 1;
		}
		cout << (cnt == 1 ? "YES" : "NO") << '\n';
	}
	return 0;
}
