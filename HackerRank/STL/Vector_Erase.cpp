/**
 *    Author:  Sohel Rana 
 *    Date:    03-10-2020
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.pb(t);
    }
    int x;
    cin >> x;
    v.erase(v.begin() + (x-1));
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a-1, v.begin() + b-1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
