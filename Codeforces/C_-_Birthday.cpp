/**
 *	Author:  Sohel Rana
 *	Date:    2022-06-05 21:49:12
 *	Task:    B_-_Birthday 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf		    push_front
#define pb		    push_back
#define fi          first
#define se          second
#define mp          make_pair
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(long long)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n;
    cin >> n;
    vector<int> v(n);
    deque<int> dq;
    for (int i = 0; i < n;i++) cin >> v[i];
    sort(all(v));
    dq.pb(v[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (dq.front() >= dq.back()) {
            dq.push_front(v[i]);
        } else
            dq.push_back(v[i]);
    }
    for (auto x : dq)
        cout << x << " ";
    return 0;
}