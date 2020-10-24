/**
 *	Author:  Sohel Rana
 *	Date:    2020-10-24 23:02:29
 *	Task:    B_Various_distances 
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

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int n, mx = 0;
    ull Manhattan = 0;
    ld euclidian = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        if (temp < 0) temp = temp * -1;
        if ((temp) > mx)
            mx = (temp);
        Manhattan += (temp);
        euclidian += sqr(temp);
    }

    cout << Manhattan << endl;
    //ld euc = sqrt(euclidian);
    printf("%0.15Lf\n",sqrt(euclidian));
    //cout << sqrt(euclidian << endl;
    cout << mx << endl;

    return 0;
}
