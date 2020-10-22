/*
ID: sohelr21
LANG: C++11
TASK: ride
*/
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

using namespace std;

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    // ifstream fin("ride.in");
    // ofstream fout("ride.out");
    unsyncIO;
    string s1, s2;
    cin >> s1 >> s2;
    int res1 = 1, res2 = 1;
    for (int i = 0; i < sz(s1); i++) {
        res1 *= (s1[i] - 'A') + 1;
    }
    for (int i = 0; i < sz(s2); i++) {
        res2 *= (s2[i] - 'A') + 1;
    }
    if((res1 % 47) == (res2 % 47))
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}
