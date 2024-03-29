/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-11 21:06:30
 *	Task:    Lift 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
#define eb(x)			emplace_back(x)
#define all(x)      	(x).begin(), (x).end()
#define rall(x)			(x).rbegin(), (x).rend()
#define sz(x)			(int)x.size()
#define debug(x)		cerr << #x << " = " << (x) << endl
#define debug2(x,y) 	cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0);

typedef double			    db;
typedef long double		    ld;
typedef long long 		    ll;
typedef unsigned long long	ull;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0e-14;

using namespace std;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        int time = 0, mypos, liftpos;
        cin >> mypos >> liftpos;
        // lift to reach me
        time = abs(liftpos - mypos) * 4;
        //lift to open door and close door
        time += 6;
        //my entring time
        time += 5;
        //lift to reach gf
        time += mypos * 4;
        //lift to open door and my leaving time
        time += 3 + 5;
        cout <<"Case "<<i<<": "<< time << endl;
    }
    return 0;
}
