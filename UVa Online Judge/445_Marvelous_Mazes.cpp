/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-18 20:11:09
 *	  Link:    link
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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main() {
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    string s;
    while (getline(cin, s)) {
        int len = s.length();
        //debug(len);
        int rep = 0;
        if (s.empty())
            cout << endl;
        else {
            for (int i = 0; i < len; i++) {
                char ch;
                if (isdigit(s[i])) {
                    rep += (int)s[i] - '0';
                } else if (isalpha(s[i]) or s[i] == '*' or s[i] == 'b') {
                    if (s[i] == 'b') {
                        ch = ' ';
                    } else {
                        ch = s[i];
                    }
                    for (int k = 0; k < rep; k++) {
                        cout << ch;
                    }
                    rep = 0;
                } else if (s[i] == '!') {
                    cout << endl;
                }
                if (i == len - 1)
                    cout << endl;
            }
        }
    }
    return 0;
}
