#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; 
const ll INF = 1e18;
const ld PI = 2 * acos((ld)0.0);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ld r, a_c, a_sq;
        cin >> r;
        a_c = PI * r * r;

        a_sq = (r * 2) * (r * 2);
        printf("Case %d: %.2Lf\n", i, a_sq - a_c);
    }
        return 0;
}