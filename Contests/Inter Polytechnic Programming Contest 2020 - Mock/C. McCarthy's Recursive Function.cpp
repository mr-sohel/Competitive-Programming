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

int f(int n)
{
    return (n >= 101) ? n - 10 : f(f(n + 11));
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n;
    while (cin >> n) {
        
        if(n == 0)
            break;
        printf("f91(%d) = %d\n", n, f(n));
    }
    return 0;
}


