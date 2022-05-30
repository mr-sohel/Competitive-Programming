/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-30 11:54:59
 *	Task:    S_-_Discover_the_Web 
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
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string curr = "http://www.lightoj.com/";
        stack<string> backward, forward;
        cout << "Case " << i << ":" << endl;
        while (true) {
            string cmd, url;
            cin >> cmd;
            if (cmd == "VISIT") {
                cin >> url;
                backward.push(curr);
                curr = url;
                cout << curr << endl;
                while (!forward.empty()) {
                    forward.pop();
                }
            } else if (cmd == "BACK") {
                if (backward.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    forward.push(curr);
                    curr = backward.top();
                    cout << curr << endl;
                    backward.pop();
                }
            } else if (cmd == "FORWARD") {
                if (forward.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    backward.push(curr);
                    curr = forward.top();
                    cout << curr << endl;
                    forward.pop();
                }
            } else if (cmd == "QUIT"){
                break;
            }
            // cout << curr << endl;
        }
    }
    return 0;
}