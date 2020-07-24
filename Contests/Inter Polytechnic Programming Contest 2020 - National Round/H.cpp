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
    int t;
    string str;
    scanf("%d ", &t);
    while (t--)
    {
        cin >> str;
        ull la = 0, lb = 1, ma = 1, mb = 1, ra = 1, rb = 0;
        ull x = 1, y = 1, i;
        for (i = 0; str[i]; i++)
        {
            if (str[i] == 'L')
            {
                x = la + ma, y = lb + mb;
                ra = ma, rb = mb;
                ma = x, mb = y;
            }
            else
            {
                x = ra + ma, y = rb + mb;
                la = ma, lb = mb;
                ma = x, mb = y;
            }
        }
        printf("%llu/%llu\n", x, y);
    }
    return 0;
}