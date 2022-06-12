/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-27 14:31:21
 *	Task:    F_-_Throwing_cards_away_I 
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
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    //unsyncIO;
    
    int n;
    while (cin >> n and n) {
        deque<int> dq;
        vector<int> v;
        for (int i = 1; i <= n; i++){
            dq.pb(i);
        }
        while (1) {
            if (sz(dq) == 1)
                break;
            int tmp;
            tmp = dq.front();
            dq.pop_front();
            v.pb(tmp);
            dq.pb(dq.front());
            dq.pop_front();
        }
        
        if (sz(v) == 0){
            cout << "Discarded cards:"<<endl;
        } else {
            cout << "Discarded cards: ";
        }
        for (auto it = v.begin(); it != v.end(); it++) {
            if (it == v.end() - 1)
                cout << *it << endl;
            else
                cout << *it << ", ";
        }
        cout << "Remaining card: " << dq.front() << endl;
    }
    return 0;
}
