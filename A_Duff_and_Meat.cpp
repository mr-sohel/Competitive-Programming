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
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    unsyncIO;
    int n, res = 0;
    cin >> n;
    int a[n], p[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> p[i];
    }
        res += a[0] * p[0];
        int temp;
        temp = p[0];
        for (int j = 1; j < n; j++)
        {
            if(temp <= p[j]) {
                res += temp * a[j];
            }
            else {
                temp = p[j];
                res += a[j] * temp;
            }
        }
        cout << res << endl;

    return 0;
}