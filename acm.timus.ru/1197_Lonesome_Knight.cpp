/**
 *	Author:  Sohel Rana
 *	Date:    2021-12-17 12:15:32
 *	Task:    1197_Lonesome_Knight 
**/
#include <bits/stdc++.h>
#define endl				      '\n'
#define sqr(x)				    (x) * (x)
#define gcd(x, y)			    __gcd(x, y)
#define lcm(x, y)			    ((x/gcd(x,y)) * y)
#define pf(x) 	  			  push_front(x)
#define pb(x)				      push_back(x)
#define eb(x)			        emplace_back(x)
#define all(x)      	    (x).begin(), (x).end()
#define rall(x)				    (x).rbegin(), (x).rend()
#define sz(x)				      (int)x.size()
#define make_unique(x) 		(x).resize(unique(all((x)))-(x).begin())
#define debug(x)			    cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y) 		  cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO    		  ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1.0e-14;

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO
  int t;
  cin >> t;
  while (t--) {
    int cnt = 0;
    string s;
    cin >> s;
    int r, c, tr, tc;
    r = s[0] - 'a' + 1;
    c = s[1] - '0';
    r--, c--;
    tr = r, tc = c;
    //up left
    tr -= 2, tc--;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //up right
    tc = c + 1;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //left up
    tr = r, tc = c;
    tr--, tc -= 2;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //left down
    tr = r + 1;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    tr = r, tc = c;
    //right up
    tr--, tc += 2;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //Right down
    tr = r + 1;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //down left
    tr = r, tc = c;
    tr += 2, tc--;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    //down right
    tc = c + 1;
    if ((tr >= 0 and tr <= 7) and (tc >= 0 and tc <= 7)) cnt++;
    cout << cnt << endl;
  }
    return 0;
}