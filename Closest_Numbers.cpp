/**
 *    Author:  Sohel Rana  
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
    int n, min;
    cin >> n;
    vector<int> v;
    vector<int> ans;
    for (int i = 0; i < n; i++) { // taking inputs
        int temp;
        cin >> temp;
        v.eb(temp);
    }
    sort(all(v)); // sorting inputs
    for (int i = 0; i < n; i++) {
        int temp;
        temp = abs(v[i] - v[i + 1]); // calculating the diff of pairs
        ans.eb(temp); // and push them to ans 
    }
    sort(all(ans)); // sort the ans vector, so that we find the closest two numbers.
    // for (int i = 0; i < n; i++) {
    //     cout << ans[i] << ' ';
    // }
    min = ans[0]; 
    for (int i = 0; i < n; i++) { // find the cloasest pair in sorted input them. it will print the pair in accending order as we sorted the vector in accending order before.
        if((abs(v[i] - v[i + 1])) == min) {
            cout << v[i] << " " << v[i + 1]<<' ';
        }
    }

    //cout << min << endl;
    return 0;
}
