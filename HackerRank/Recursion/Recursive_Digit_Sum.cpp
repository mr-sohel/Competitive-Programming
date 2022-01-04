/**
 *	Author:  Sohel Rana
 *	Date:    2022-01-04 11:51:30
 *	Task:    Recursive_Digit_Sum 
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
#define debug(x)		cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1e-9;

using namespace std;

int super_digit(long long n) {
    if (n < 10)
        return n;
    long long sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return super_digit(sum);
}

ll sum_init(string s) {
    ll sum = 0;
    for (ll i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    int k;
    cin >> s;
    cin >> k;
    ll sum = sum_init(s) * k;
    cout << super_digit(sum) << endl;
    return 0;
}