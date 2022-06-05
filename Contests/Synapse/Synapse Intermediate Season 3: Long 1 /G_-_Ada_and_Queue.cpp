/**
 *	Author:  Sohel Rana
 *	Date:    2022-05-25 21:07:34
 *	Task:    G_-_Ada_and_Queue 
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
    unsyncIO;
    deque<int> q;
    int flag = 0;
    int t;
    cin >> t;
    while (t--) {
        string s;
        int item;
        cin >> s;
        if (s == "toFront"){
            cin >> item;
            if (flag % 2 == 1) {
                q.push_back(item);
            } else
                q.push_front(item);
        } else if (s == "push_back") {
            cin >> item;
            if (flag % 2 == 1) {
                q.push_front(item);
            } else
                q.push_back(item);
        } else if (s == "front") {
            if (q.empty()){
                cout << "No job for Ada?" << endl;
            } else {
                if (flag % 2 == 1) {
                    cout << q.back() << endl;
                    q.pop_back();
                } else {
                    cout << q.front()<<endl;
                    q.pop_front();
                }
            }  
        } else if (s == "back") {
            if (q.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (flag % 2 == 1) {
                    cout << q.front() << endl;
                    q.pop_front();
                } else {
                    cout << q.back() << endl;
                    q.pop_back();
                }
            }
        } else if (s == "reverse") {
            flag++;
        }
        
    }
    return 0;
}