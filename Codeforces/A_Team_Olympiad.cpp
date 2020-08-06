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
    unsyncIO;
    int n;
    cin >> n;
    vector<int> p, m, s;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 1)
            p.pb(i+1);
        else if (temp == 2)
            m.pb(i+1);
        else if (temp == 3)
            s.pb(i+1);
    }
        
    int n_team;
    n_team = min(size(p), min(size(m), size(s)));
    cout << n_team << endl;
    if(n_team) {
        for (int i = 0; i < n_team; i++) {
            cout << p[i] << " " << m[i] << " " << s[i] << endl;
        }
    }
    return 0;
}