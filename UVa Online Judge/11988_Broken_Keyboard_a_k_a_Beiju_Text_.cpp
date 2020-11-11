/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-03 20:51:29
 *	Task:    E_Broken_Keyboard_a_k_a_Beiju_Text_ 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
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

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;
list<char> ls;
string s;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    while (cin >> s) {
        ls.clear();
        list<char>::iterator it = ls.begin();
        for (int i = 0; i < sz(s); i++) {
            if (s[i] == '[')
                it = ls.begin();
            else if (s[i] == ']')
                it = ls.end();
            else
                ls.insert(it, s[i]);
        }
        for (it = ls.begin(); it != ls.end(); it++) {
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}
