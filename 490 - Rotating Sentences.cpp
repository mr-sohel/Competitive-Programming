/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-14 19:14:58
 *	  Link:    UVa 490 - Rotating Sentences
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

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    vector<string> v;
    string temp;
    int longest_str = 0;
    while (getline(cin, temp)) {
        v.pb(temp);
    }
    for (int i = 0; i < (int)v.size(); i++) {
        if ((int)v[i].length() > longest_str)
            longest_str = v[i].length();
    }
    // debug(v[0].length());
    // debug(v[1].length());
    for (int i = 0; i < (int)v.size(); i++) {
        if ((int)v[i].length() < longest_str) {
            for (int j = (int)v[i].length(); j <= longest_str; j++)
                v[i] += ' ';
        }
    }
    // debug(v[0].length());
    // debug(v[1].length());
    for (int i = 0; i < longest_str; i++) {
        for (int size = v.size() - 1; size >= 0; size--) {
            cout << v[size][i];
        }
        cout << endl;
    }
    return 0;
}
