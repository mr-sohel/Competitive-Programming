/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-27 16:09:08
 *	Task:    test
**/
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
const int MOD = 1000003;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e6+2;

using namespace std;


set<ll> memo;

void nod(ll n) {
    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++) {
        if (i * i == n) {
            memo.insert(i);
        } else if (n % i == 0) {
            memo.insert(n / i);
            memo.insert(i);
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n, k;
    cin >> n >> k;
    nod(n);
    //for(auto x: memo) {
    //cout<<x<<" ";
    //}
    //puts("");
    int x = 1;
    if (sz(memo) < k)
        cout << "-1" << endl;
    else {
        for (auto it = memo.begin(); it != memo.end(); x++, it++){
            if (x == k) {
                cout << *it << endl;
                break;
            }
        }
    }
    return 0;
}