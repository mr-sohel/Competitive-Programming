/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-19 11:45:22
 *	Task:    B_Fence 
**/
#include <bits/stdc++.h>
#define endl            '\n'
#define sqr(x)          (x) * (x)
#define gcd(x, y)       __gcd(x, y)
#define lcm(x, y)       ((x/gcd(x,y)) * y)
#define pf(x)           push_front(x)
#define pb(x)           push_back(x)
#define eb(x)           emplace_back(x)
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define sz(x)           (int)x.size()
#define debug(x)        cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)     cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO        ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld EPS = 1e-9;

using namespace std;

int arr[5*(int)1e5];
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int n, k, cnt, ans = INT_MAX, ans2 = INT_MAX;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = 0;i <= n - k;i++) {
        ans = min(ans, (arr[i + k] - arr[i]));
        if (ans < ans2)
        {
            ans2 = ans;
            cnt = i + 1;
        }
    }
    cout << cnt << endl;
    return 0;
}