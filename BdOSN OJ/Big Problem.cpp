/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-27 10:40:00
 *	Task:    Big Problem 
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

// ll BigProblem2(ll n) {
//     ll Sum = 0;
//     for (ll i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             Sum += i;
//         } else {
//             Sum += (i * 2);
//         }
//     }
//     return Sum;
// }

ll BigProb(ll n) {
    ll even = 0, odd = 0;
    if(n % 2 == 0) {
        even += (n/2) * (2 + n) / 2;
        odd += (n/2) * (1 +(n-1)) / 2;
        odd *= 2;
    } else {
        even = (n/2) * (2 + (n - 1)) / 2;
        odd = ((n / 2)+1) * (1 + n) / 2;
        odd *= 2;
    }
    return even+odd;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n;
    cin >> n;
    cout << BigProb(n) << endl;
    //cout << BigProblem2(n) << endl;
    return 0;
}
