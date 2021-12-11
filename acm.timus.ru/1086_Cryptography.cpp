/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-11 19:18:35
 *	Task:    1086_Cryptography 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
#define eb(x)			emplace_back(x)
#define all(x)      	(x).begin(), (x).end()
#define rall(x)			(x).rbegin(), (x).rend()
#define sz(x)			(int)x.size()
#define debug(x)		cerr << #x << " = " << (x) << endl
#define debug2(x,y) 	cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double			    db;
typedef long double		    ld;
typedef long long 		    ll;
typedef unsigned long long	ull;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0e-14;

using namespace std;
vector<int> primes;

bool isprime(int n) {
    int len = sqrt(n);
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;
    for (int i = 3; i <= len + 1; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    primes.pb(2);
    for (int i = 1; i <= 165000;i += 2) {
            if (isprime(i)){
                primes.pb(i);
            }
        }
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << primes[k - 1] << endl;
    }
    return 0;
}