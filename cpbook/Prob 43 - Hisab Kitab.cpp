#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9+7;
const int MX = 2e5+5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// got WA in dimik oj
using namespace std;

// ll BigMod(long long B, long long P, long long M)
// {
//     long long R = 1;
//     while (P > 0) {
//         if (P % 2 == 1) {
//             R = (R * B) % M;
//         }
//         P /= 2;
//         B = (B * B) % M;
//     }
//     return R;
// }

inline long long bigmod(long long a, long long p, long long m)
{
    long long res = 1 % m, x = a % m;
    while (p)
    {
        if (p & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        p >>= 1;
    }
    return res;
}
int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    //unsyncIO;
    ll p, q, m, t;
    cin >> t;
    while(t--) {

        cin >> p >> q >> m;
        cout << "Result = " << bigmod(p, q, m) << endl;
    }
    return 0;
}