/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-24 10:54:04
 *	Task:    B. The Errors 
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

using namespace std;

ull find_X(vector<int> A , int skip ) { 
    ull total = 1;
    for (int i = 0; i < sz(A); i++) {
        if(i != (skip -1)) {
            total *= A[i];
        }
    }
    return total;
}



int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    int tc = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> res;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        int m;
        cin >> m;
        vector<int> B(m);
        for (int i = 0; i < m; i++) cin >> B[i];
        ull X, Y; // Y can't be zero.
        for (int i = 0; i < m; i++) {
            X = find_X(A, B[i]);
            if(X > 1000000000LL) {
                X = 0;
                res.eb(0);
            } else { 
                Y = sqr(A[i]);
                if(Y == 0) {
                    res.eb(0);
                }
                else
                    res.eb((X / Y));
            }
        }
        db ans = accumulate(all(res), 0.0);
        cout <<"Case #"<<tc++<<": "<< (ans) << endl;
    }
    return 0;
}
