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
#define error(x) 	cerr << #x << " = " << (x) <<endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    int n, m;
    cin >> n;
    int wire[n];
    for (int i = 1; i <= n; i++) {
        cin >> wire[i];
    }
    cin >> m;
   
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        wire[x - 1] += (y - 1);
        wire[x + 1] += (wire[x] - y);
        wire[x] = 0;
        // error(wire[1]);
        // error(wire[2]);
        // error(wire[3]);
    }
    for (int i = 1; i <= n; i++) {
        cout << wire[i] << endl;
    }
        return 0;
}