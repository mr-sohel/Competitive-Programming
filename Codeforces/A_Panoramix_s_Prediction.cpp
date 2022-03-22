/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-22 15:29:55
 *	Task:    A_Panoramix_s_Prediction 
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
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;

int primes[16];

int k = 1;
void prime_gen() {
    primes[0] = 2;
    for (int i = 3; i <= 50; i += 2) {
        bool check = false;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                check = true;
                continue;
            }
        }
        if (!check) {
            primes[k] = i;
            k++;
        }
    }
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, m;
    cin >> n >> m;
    prime_gen();
    bool flag = false;
    for (int i = 0; i < 15; i++) {
        if (primes[i] == n and primes[i + 1] == m) {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    return 0;
}