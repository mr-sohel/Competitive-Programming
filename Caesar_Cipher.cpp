#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    int n, k;
    string s, ans;
    cin >> n >> s >> k;
    if(k > 25) 
        k = k % 26;
    for (int i = 0; i < n; i++) {
        int x = s[i];
        if(x >= 'a' && x <= 'z') {
            x = x + k;
            if(x > 'z')
                x = x - 26;
        }
        else if (x >= 'A' && x <= 'Z') {
            x = x + k;
            if(x > 'Z')
                x = x - 26;
        }
        s[i] = x;
    }
    cout << s << endl;
    return 0;
}