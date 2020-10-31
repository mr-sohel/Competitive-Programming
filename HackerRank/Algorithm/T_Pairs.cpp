/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-30 21:41:18
 *	Task:    T_Pairs 
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

ll NumberOfPair(vector<ll> v, ll terget, ll n) {
    sort(all(v));
    ll cnt = 0, j = 1, i = 0;
    while (j < n) { // two pointer method
        //debug2(v[j], v[i]);
        ll dif = v[j] - v[i];
        if(dif == terget){
            cnt++;
            j++;
        } else if(dif > terget)
            i++;
        else if(dif < terget)
            j++;
    }
    return cnt;
}

    int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    ll n, terget;
    cin >> n >> terget;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << NumberOfPair(v, terget, n) << endl;
    return 0;
}

// 1 5 3 4 2
// 1 2 3 4 5