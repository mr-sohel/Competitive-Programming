/**
 *  Author:  Sohel Rana
 *  Date:    2022-05-23 17:00:13
 *  Task:    E_-_Babelfish
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(x,y)    __gcd(x, y)
#define lcm(x,y)    ((x/gcd(x,y)) * y)
#define pf(x)       push_front(x)
#define pb(x)       push_back(x)
#define eb(x)       emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)       (int)x.size()
#define prec(x)     fixed<<setprecision(x)
#define debug(x)    cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld) - 1);
const int mod = 1e9 + 7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    map<string, string > mp;
    string s, key, value, x;
    while (getline(cin, s)) {
        if (s.empty())
            break;
        stringstream ss;
        ss << (s);
        ss >> value >> key;
        mp[key] = value;
    }
    while (cin >> x) {
        if (mp.find(x) != mp.end()) {
            cout << mp[x] << endl;
        } else
            cout << "eh" << endl;
    }

    return 0;
}