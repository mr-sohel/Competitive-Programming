/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-23 15:41:04
 *	Task:    D_-_Double_Ended_Queue 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
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
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        deque<int> dq;
        int n, m;
        cin >> n >> m;
        while (m--) {
            string s;
            int item;
            cin >> s;
            if (s == "pushLeft" or s == "pushRight")
                cin >> item;
            if (s == "pushLeft") {
                if (sz(dq) == n) {
                    cout << "The queue is full" << endl;
                } else {
                    dq.push_front(item);
                    cout << "Pushed in left: " << item << endl;
                }
            } else if(s == "pushRight") {
                if (sz(dq) == n)
                    cout << "The queue is full" << endl;
                else {
                    dq.push_back(item);
                    cout << "Pushed in right: " << item << endl;
                }
            }
            if (s == "popLeft") {
                if (dq.empty()) {
                    cout << "The queue is empty" << endl;
                } else {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
            } else if(s == "popRight") {
                if (dq.empty()) {
                    cout << "The queue is empty" << endl;
                } else {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}