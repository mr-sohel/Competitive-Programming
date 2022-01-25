/**
 *	Author:  Sohel Rana
 *	Date:    2022-01-24 14:35:12
 *	Task:    A_Keyboard 
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
const ld EPS = 1.0e-14;

using namespace std;
string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

void print_right(char ch) {
    for (int i = 0; i < sz(a); i++) {
        if (ch == a[i])
            cout << a[i - 1];
    }
}

void print_left(char ch) {
    for (int i = 0; i < sz(a); i++) {
        if (ch == a[i])
            cout << a[i + 1];
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string ch, s;
    cin >> ch >> s;
    for (int i = 0; i < sz(s); i++) {
        if (ch == "R") {
            print_right(s[i]);
        }
        if (ch == "L") {
            print_left(s[i]);
        }
    }
    return 0;
}