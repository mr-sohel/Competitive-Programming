/**
 *  Author:  Sohel Rana
 *  Date:    2022-06-22 21:07:39
 *  Task:    Counting_Triangles
**/
#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define fi            first
#define se            second
#define sz(x)         (long long)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define debug(x)      cerr<<#x<<" = "<<(x)<<endl
#define debug2(x,y)   cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<<endl
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;cin >> t;
    while (t--) {
        ll n;cin >> n;
        ll ans = (n * (n + 2) * (2 * n + 1)) / 8;
        cout << ans << endl;
    }
    return 0;
}