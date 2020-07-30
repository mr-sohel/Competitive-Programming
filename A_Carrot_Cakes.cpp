#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    double one_oven = 0.0, two_oven = 0.0;
    one_oven = (n / k) * t;
    two_oven = d + (n / k) * (t / 2.0);
    // if(two_oven < one_oven)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    debug(one_oven);
    debug(two_oven);
    return 0;
}