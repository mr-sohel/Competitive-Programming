#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; 
const ll INF = 1e18;
const ld PI = acos((ld)-1);
#define unsyncIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int gcd(int a, int b)
{ //assuming a >= b
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    int t;
    ll n; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << (n / 2) << endl;
        
    }

    return 0;
}
