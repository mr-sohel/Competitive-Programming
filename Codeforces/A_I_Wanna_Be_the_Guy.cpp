/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-24 19:00:05
 *	Task:    A_I_Wanna_Be_the_Guy 
**/
#include <bits/stdc++.h>
#define endl        '\n'
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

typedef double 			      db;
typedef long double 	      ld;
typedef long long 		      ll;
typedef unsigned long long 	  ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int levels, n1, n2;

    set<int> st;
    cin >> levels;
    cin >> n1;
    for(int i = 0; i < n1; i++) 
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    if(st.size() == levels)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
