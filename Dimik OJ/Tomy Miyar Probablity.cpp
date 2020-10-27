/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-27 13:18:03
 *	Task:    Tomy Miyar Probablity 
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
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        unordered_map<string, int> freq;
        int cnt = 0;
        stringstream ss(s);

        string temp;
        while(ss>>temp) {
            cnt++;
            freq[temp]++;
        }
        int facto = 1;
        for (auto x : freq) {
            facto *= fact(x.second);
        }
        //cout << facto << endl;
        // int dup = (cnt - sz(st));
        // if (dup != 0)
        //     dup++;
        //debug2(cnt, dup);
        cout << "1/" << (fact(cnt) / facto) << endl;
    }
    return 0;
}
