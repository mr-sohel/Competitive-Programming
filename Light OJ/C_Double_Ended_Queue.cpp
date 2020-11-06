/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-04 00:46:20
 *	Task:    C_Double_Ended_Queue 
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

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    
    int size, operation;
    int t;
    cin >> t;
    int tc = 1;
    while (t--) {
        deque<int> d;
        cout << "Case " << tc++ << ":" << endl;
        int temp = 0;
        cin >> size >> operation;
        //temp = size;
        for (int i = 0; i < operation; i++) {
            string s;
            int item;
            cin >> s;
            if(s == "pushLeft" or s == "pushRight") 
                cin>> item;

            if (s == "pushLeft") {
                if(temp == size) {
                    cout << "The queue is full" << endl;
                } else {
                    temp++;
                    d.push_front(item);
                    cout << "Pushed in left: " << item << endl;
                }

            } else if (s == "pushRight") {
                if (temp == size) {
                    cout << "The queue is full" << endl;
                } else {
                    temp++;
                    d.push_back(item);
                    cout << "Pushed in right: " << item << endl;
                }
            } else if (s == "popLeft") {
                if(temp == 0) {
                    cout << "The queue is empty" << endl;
                } else {
                    temp--;
                    int t = d.front();
                    d.pop_front();
                    cout << "Popped from left: " << t << endl;
                }
            } else if (s == "popRight") {
                if (temp == 0) {
                    cout << "The queue is empty" << endl;
                } else {
                    int t = d.back();
                    temp--;
                    d.pop_back();
                    cout << "Popped from right: " << t << endl;
                }
            }
        }
    }
    return 0;
}
