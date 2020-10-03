/**
 *    Author:  Sohel Rana 
 *    Date:    02-10-2020
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

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans(2);
    if (a[0] > b[0])
        ans[0]++;
    else if (a[0] < b[0])
        ans[1]++;
    if (a[1] > b[1])
        ans[0]++;
    else if (a[1] < b[1])
        ans[1]++;
    if (a[2] > b[2])
        ans[0]++;
    else if (a[2] < b[2])
        ans[1]++;
    return ans;
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    unsyncIO;
    vector<int> a;
    vector<int> b;
    vector<int> ans;
    for (int i = 0; i < 3; i++) {
        int temp;
        cin >> temp;
        a.eb(temp);
    }
    for (int i = 0; i < 3; i++) {
        int temp;
        cin >> temp;
        b.eb(temp);
    }
    ans = compareTriplets(a, b);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}