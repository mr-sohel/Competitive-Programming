/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-27 23:30:12
 *	Task:    B_Sort_the_Array 
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
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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
    int n, p, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (is_sorted(v.begin(), v.end())) {
        cout << "yes" << endl;
        cout << v[0] << " " << v[0] << endl;
        return 0;
    }
    for (int i = 0; i < n;i++) {
        for (int j = i + 1; j < n; j++) {

            swap(v[i], v[j]);
            
            if (is_sorted(v.begin(), v.end())) {
                cout << "yes" << endl;
                cout << v[i] << " " << v[j] << endl;
                return 0;
            }
            else {
                swap(v[j], v[i]);
               // debug2(v[i], v[j]);
                if (is_sorted(v.begin(), v.end())) {
                    cout << "yes" << endl;
                    cout << v[j] << " " << v[i] << endl;
                    return 0;
                }
            }
        }
    }
    cout << "no" << endl;

    return 0;
}
