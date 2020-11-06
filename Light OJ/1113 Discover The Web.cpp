/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-06 18:32:31
 *	Task:    A_lol 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;
inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    //ld stime = gett();
    int t;
    cin >> t;
    int tc = 1;
    //cin.ignore();
    while (t--) {
        cout << "Case " << tc++ << ":" << endl;
        stack<string> backward, forward;
        string s;
        string curr_page = "http://www.lightoj.com/";
        while (cin >> s) {
            string url;
            if (s == "VISIT") {
                cin >> url;
                backward.push(curr_page);
                curr_page = url;
                while (!forward.empty()) forward.pop();
                cout << curr_page << endl;
            } else if (s == "BACK") {
                if (backward.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    forward.push(curr_page);
                    curr_page = backward.top();
                    //debug(curr_page);
                    backward.pop();
                    cout << curr_page << endl;
                }

            } else if (s == "FORWARD") {
                if (forward.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    backward.push(curr_page);
                    curr_page = forward.top();
                    forward.pop();
                    cout << curr_page << endl;
                }

            } else if (s == "QUIT") {
                break;
            }
        }
    }
    //cerr << "Time: " << gett() - stime << endl;
    return 0;
}
