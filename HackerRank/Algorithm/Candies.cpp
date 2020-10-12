/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-11 22:22:43
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
    // i will try it later. 
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    ll n;
    cin >> n;
    vector<ll> ratings(n);
    vector<ll> candies(n);
    for (int i = 0; i < n; i++) {
        cin >> ratings[i];
    }
    ll res = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n-1; i++) { //n-1
        if(ratings[i] < ratings[i+1]) {
            if(i == 0) {
                cnt1 = 1;
                cnt2 = cnt1 + 1;
                res += (cnt1 + cnt2);
            } else {
                cnt1 = cnt2;
                cnt2 = cnt1 + 1;
                res += cnt2;
            }
        }
        else if(ratings[i] > ratings[i+1]) {
            if(i == 0) {
                cnt1 = 2;
                cnt2 = 1;
                res += cnt1 + cnt2;
            } else {
                cnt1 = cnt2;
                cnt2 = 1;
                if (cnt1 == cnt2) {
                    cnt2++;
                    res += cnt2;
                }
                else
                    res += cnt2;
            }

        }
        else if(ratings[i] == ratings[i + 1]) {
            if(i == 0) {
                cnt1 = 1;
                cnt2 = 1;
                res += (cnt1 + cnt2);
            } else {
                cnt1 = cnt2;
                cnt2 = 1;
                res += cnt2;
            }
           
        }
    }

// check 5 4 3 2 1
//       5 4 3 2 1 // by checking right to left
// ans should be 15
// 3 3 3 3 3
// should be 5

    cout << res << endl;
    return 0;
}
