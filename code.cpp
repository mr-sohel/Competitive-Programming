//CR7_G.O.A.T
#include <bits/stdc++.h>
using namespace std;
const int N = 1000 + 5;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<bool> is_prime(N + 1, true);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i] == true) {
            for (int j = i * i; j <= N; j = j + i) {
                is_prime[j] = false;
            }

        }

    }
    vector<long long>primes;
    for (int i = 0; i <= N; i++) {
        if (is_prime[i]) {
            bool f = false;
            long long num = i, tmp = 0, cnt = 1;
            while (num > 1)
            {
                tmp = tmp + (cnt * (num % 10));
                cnt *= 10;
                if (is_prime[tmp] == false || num % 10 == 0)
                {
                    f = true;
                    break;
                }

                num /= 10;

            }

            if (f == false) primes.push_back(i);
        }

    }
    for (auto it : primes) cout << it << '\n';

    // long long q, k; cin >> q;
    // while (q--) {
    //     cin >> k;
    //     long long lo = 0, hi = primes.size() - 1, mid, ans = -1;
    //     while (hi - lo >= 0) {
    //         mid = lo + (hi - lo) / 2;
    //         if (primes[mid] > k) {
    //             hi = mid - 1;
    //         } else {
    //             lo = mid + 1;
    //             ans = mid;
    //         }
    //     }
    //     // cout << lo << '\n'; // is also correct
    //     cout << ans + 1 << '\n';
    // }

    return 0;
}
