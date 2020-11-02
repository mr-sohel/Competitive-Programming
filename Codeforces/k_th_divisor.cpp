/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-31 20:12:57
 *	Task:    I_k_th_divisor 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

set<ll> divs;

void divisors(ll n, ll k) {
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.insert(i);
            divs.insert(n / i);
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    ll n, k;
    cin >> n >> k;
    divisors(n, k);
    set<ll>::iterator it;
    int t = 1;
    if(sz(divs) < k) {
        cout << -1 << endl;
    } else {
        for (it = divs.begin(); it != divs.end(); it++) {
            if (t == k){
                cout << *it << endl;
                break;
            }
            t++;
        }
    }
    
    return 0;
}
