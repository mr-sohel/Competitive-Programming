/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-15 15:33:26
 *	Task:    B_Fedya_and_Maths 
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


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    int a[] = { 0,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72,76,80,84,88,92,96 };
    cin >> s;
    if (s.length() < 2) {
        int x = s[0] - '0';
        if (x == 0 or x == 4 or x == 8)
            cout << 4 << endl;
        else
            cout << 0 << endl;
    }
    else if (s.length() >= 2) {
        int y = ( s[s.length() - 1] - '0' )+ (s[s.length() - 2] - '0') * 10;
        if (binary_search(a, a + 23, y)) {
            cout << 4 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}