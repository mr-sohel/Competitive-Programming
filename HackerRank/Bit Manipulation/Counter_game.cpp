/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-14 18:53:39
 *	Task:    Counter_game 
**/
#include <bits/stdc++.h>
#define endl        '\n'
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

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

bool isPowerTwo(ll n) {
    int cnt = 0;
    while(n) {
        if(n & 1) 
            cnt++;
        n = n >> 1;
    }
    //debug(cnt);
    if (cnt == 1)
        return true;
    return false;
}

ll nearPowerTwo(ll n) {
    ll tmp = 1;
    int i;
    for (i = 1;; i++) {
        if (tmp > n)
            break;
        else
            tmp = pow(2, i);
    }
    //cout << tmp << endl;
    return pow(2, i-2);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll t;
    cin >> t;
    while (t--) {
        int winner[2] = {0};
        ll n;
        cin >> n;
        int cnt = 1;
        while (n != 1) {
            cnt++;
            if (isPowerTwo(n)) {
                n /= 2;
            } else {
                n -= nearPowerTwo(n);
            }
        }
        if(cnt % 2 == 0)
            cout << "Richard" << endl;
        else
            cout << "Louise" << endl;
    }

    return 0;
}


// in n == 1 ? 