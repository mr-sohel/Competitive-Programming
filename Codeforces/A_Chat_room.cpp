/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-17 01:20:37
 *	Task:    A_Chat_room 
**/
#include <bits/stdc++.h>
#define endl				'\n'
#define sqr(x)				(x) * (x)
#define gcd(x, y)			__gcd(x, y)
#define lcm(x, y)			((x/gcd(x,y)) * y)
#define pf(x) 	  			push_front(x)
#define pb(x)				push_back(x)
#define eb(x)				emplace_back(x)
#define all(x)      		(x).begin(), (x).end()
#define rall(x)				(x).rbegin(), (x).rend()
#define sz(x)				(int)x.size()
#define make_unique(x) 		(x).resize(unique(all((x)))-(x).begin())
#define debug(x)			cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 		cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    		ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1.0e-14;

using namespace std;

bool ismatch(string s1, string s2) {
    int j = 0;
    for (int i = 0;i < sz(s2); i++) {
        if (s2[i] == s1[j])
            j++;
    }
    if (j == 5)
        return true;
    return false;

}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    cin >> s;
    if (ismatch("hello", s)) {
        cout<<"YES"<<endl;
    }
    else cout <<"NO"<<endl;

    return 0;
}