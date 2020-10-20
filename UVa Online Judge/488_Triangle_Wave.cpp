/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-19 10:32:39
 *	  Link:    link
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
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    int t;
    cin >> t;
    while(t--) {
        char ch = getchar();
        int amp, freq;
        cin >> amp;
        cin >> freq;
        while(freq--) {
            int i;
            for (i = 1; i <= amp; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << i;
                }
                cout << endl;
            }
            i = amp - 1;
            for (int k = i; k >= 1; k--) {
                for (int j = 1; j <= k; j++)
                    cout << k;
                cout << endl;
            }
            if(t != 0 or freq != 0)
            cout << endl;
        }
    }
   

    return 0;
}
