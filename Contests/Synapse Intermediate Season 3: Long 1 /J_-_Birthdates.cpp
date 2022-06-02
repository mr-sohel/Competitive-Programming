/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-30 17:13:37
 *	Task:    J_-_Birthdates 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf		    push_front
#define pb		    push_back
#define fi          first
#define se          second
#define mp          make_pair
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(long long)x.size()
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

struct bday{
    string name;
    int day, month, year;
};
bool cmp(bday a, bday b) {
    return ((a.year > b.year) or (a.year == b.year and a.month > b.month) or (a.year == b.year and a.month == b.month and a.day > b.day));
}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    vector<bday> v;
    for (int i = 1; i <= t; i++) {
        string name;
        int day, month, year;
        cin >> name >> day >> month >> year;
        v.pb({ name, day,month, year });
    }
    sort(all(v), cmp);
    auto it = v.begin();
    // for (auto x : v) cout << x.name << endl;
    cout << it->name << endl;
    it = v.end();
    it--;
    cout << it->name << endl;
    return 0;
}