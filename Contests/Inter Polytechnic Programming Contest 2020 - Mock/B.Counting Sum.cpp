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

int main()
{
    unsyncIO;
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        ll temp,sum = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            sum += temp;
        }
        cout << sum << endl;
    }
    return 0;
}