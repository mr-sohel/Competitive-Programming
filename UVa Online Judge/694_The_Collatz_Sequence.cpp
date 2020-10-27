/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-25 13:07:05
 *	Task:    tamplate 
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

ll cycle(ll a, ll l) {
    ll term = 1;
    while (true) {
        //debug2(a, term);
        if (a > l or a == 1)
            return term;

        if (a % 2 == 0) {
            a = a / 2;
        } else {
            //term++;
            if((3*a+1) > l)
                return term;
            a = (3 * a) + 1;
        }
        term++;
    }
    //return term;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll tc = 1;
    while (true) {
        ll a, l;
        scanf("%Ld %Ld", &a, &l);
        if (a < 0 and l < 0)
            break;
        else {
            //int v = cycle(a, l);
            printf("Case %Ld: A = %Ld, limit = %Ld, number of terms = %Ld\n", tc++, a, l, cycle(a, l));
            // cout << "Case " << tc++ << ": "
            //      << "A = " << a << ", limit = " << l << ", number of terms = " << cycle(a, l) << endl;
        }
    }

    return 0;
}
