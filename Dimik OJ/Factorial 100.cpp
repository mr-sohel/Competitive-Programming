
#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9 + 7;
const int MX = 2e5 + 5;
const ll INF = 1e18;
const ld PI = acos((ld) - 1);
#define unsyncIO ios::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int Trailing_Zeros(int N) {
    int sum = 0;
    while (N) {
        sum += N / 5;
        N = N / 5;
    }
    return sum;
}

int main() {
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n, t, ans;
    cin >> t;
    while (t--) {
        cin >> n;
        ans = Trailing_Zeros(n);
        cout << ans << endl;
    }

    return 0;
}