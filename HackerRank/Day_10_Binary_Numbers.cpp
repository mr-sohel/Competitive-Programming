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

vector<int> ans;

void binary(int n) {
    int cnt = 0;
    int a[1000];
    int i = 0;
    while(n > 0) {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    //debug(i);
    for (int j = 0; j < i; j++){
        if(a[j] == 1) {
            while(1) {
                if(a[j] == 1)
                    cnt++;
                else if (a[j] == 0 || j >= i) {
                    ans.pb(cnt);
                    cnt = 0;
                    break;
                }
                j++;
            }
        }
    }
}

int main()
{
    //freopen("/home/taalpatar_shepai/Documents/my_codes/out.txt", "w", stdout);
    int n;
    cin >> n;
    binary(n);
    cout << *max_element(all(ans)) << endl;
    return 0;
}
