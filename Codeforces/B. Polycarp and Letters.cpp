/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-07 11:41:52
 *	Task:    B. Polycarp and Letters 
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


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int len;
    vector<string> memo;
    vector<int> res;
    cin >> len;
    string s,temp;
    cin >> s;
    for (int i = 0;i < len;i++) {
        if (isupper(s[i])) {
            if (!temp.empty()){
                sort(all(temp));
                temp.erase(unique(all(temp)), temp.end());
                memo.pb(temp);
           }
            temp = "";
        }
        else {
            temp += s[i];
        }
    }
    sort(all(temp));
    temp.erase(unique(all(temp)), temp.end());
    memo.pb(temp);
    if (sz(memo) == 0)
        cout << 0 << endl;
    else {
        sort(all(memo));
        for (int i = 0;i < sz(memo); i++)
            res.pb(sz(memo[i]));
        cout << *max_element(all(res)) << endl;
    } 
    return 0;
}