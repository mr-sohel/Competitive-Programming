#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

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
    // WA Solution. 
    int t;
    cin >> t;
    while (t--)
    {
       vector<ll> vec(4);
       for (int i = 0;i < 4;i++) {
           cin >> vec[i];
       }
       sort(all(vec));
       bool flag = false;
       vector<ll> v(4);
       for (ll i = 0; i < 4; i++) {
           for(ll j = 0; j < 4; j++) {
               if(i == j) continue;
               ll d = vec[i] + v[j];
               ll a = d/2;
               ll b = vec[j] - a;
               if(1<=a and a<=1e4 and 1<=b and b<=1e4) {
                   v.pb(a+b);
                   v.pb(a-b);
                   v.pb(a*b);
                   v.pb(a/b);
                   sort(all(v));
                   if (v == vec) {
                       cout << a << " " << b << endl;
                       flag = true;
                       break;
                   }
                   v.clear();
                }
           }
           if(flag) break;
       }
       if (!flag)
           cout << "-1 -1" << endl;
    }
    return 0;
}