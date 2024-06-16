#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m >= n) {
            cout << (1 << (n + 1)) - 1 << "\n";
        } else {
            cout << (1 << (m + 1)) - 1 << "\n";
        }
    }
    return 0;
}
