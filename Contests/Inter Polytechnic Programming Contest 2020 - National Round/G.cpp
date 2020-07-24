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
int bin(int n)
{
    int a = 1, ans = 0;
    while (n > 0)
    {
        ans += n % 2 * a;
        a *= 10;
        n /= 2;
    }
    return ans;
}

int main()
{
    //freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int a[4], a1[4], t1, t2, t3, t4;
        scanf("%d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3]);
        scanf("%d.%d.%d.%d", &a1[0], &a1[1], &a1[2], &a1[3]);
        t1 = bin(a[0]);
        t2 = bin(a[1]);
        t3 = bin(a[2]);
        t4 = bin(a[3]);
        if (t1 == a1[0] && t2 == a1[1] && t3 == a1[2] && t4 == a1[3])
            printf("Case %d: Yes\n", k);
        else
            printf("Case %d: No\n", k);
    }
    return 0;
}