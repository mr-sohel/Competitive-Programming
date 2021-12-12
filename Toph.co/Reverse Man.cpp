/**
 *	Author:  Sohel Rana
 *	Date:    2020-12-03 20:42:46
 *	Task:    Reverse Man 
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

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    string s;
    getline(cin, s);
    vector<string> vs;
    string temp;
    for (int i = 0; i < sz(s); i++) {
        if(s[i] == ' '){
            reverse(all(temp));
            // debug(temp);
            vs.eb(temp);
            temp = "";
        } else
            temp += s[i];
    }
    if(!temp.empty()){
        reverse(all(temp));
        vs.eb(temp);
    }
    for (int i = sz(vs) - 1; i >= 0; i--){
        if(i == 0)
            cout << vs[i];
        else 
            cout << vs[i] << " ";
    }
    cout << endl;
    return 0;
}
