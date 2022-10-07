/**
 *  Author:  Sohel Rana
 *  Date:    2022-08-23 19:52:00
 *  Task:    B_-_Light_It_Up
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
const ll inf = 8e18;
const ld eps = 1e-14;
const int mx = 1e5;

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    vector<ll> x(n), y(n);
    for (int i = 0; i < k; i++){
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    ll res = 0;
    for (int i = 0; i < n; i++) {
        ll tres = inf;
        for (int j = 0; j < k; j++){
            tres = min(tres, sqr(x[i] - x[a[j]])  + sqr(y[i] - y[a[j]]) );
        }
        res = max(res, tres);
    }
    printf("%.12lf\n", sqrt((double)res));

    return 0;
}