/**
 *	Author:  Sohel Rana
 *	Date:    2022-03-26 11:33:29
 *	Task:    P_21_Prime_Sieve 
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
const int mdx = 1e7;
const int mxx = 1e7+1;

using namespace std;

vector<int> primes;
bitset<mxx> mark;
void sieve(int mx) {
    for (int i = 2; i * i <= mx; i++) {
        if (mark[i] == false) {
            for (int j = i + i; j <= mx; j += i) {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= mx; i++)
        if (mark[i] == false)  // i is a prime
            primes.push_back(i);
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int n;
    cin >> n;
    sieve(n);
    cout << sz(primes) << endl;
    for (auto x : primes) {
        cout << x << " ";
    }
    return 0;
}