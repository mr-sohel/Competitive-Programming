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

bool isPerfect( unsigned long long n)
{
    unsigned long long x = llround(sqrt(n));

    if ((unsigned long long) x * x == n)
    {
        return true;
    }
    return false;
}

int main()
{
	//freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
	int t;
	cin >> t;
	while (t--)
	{
		long long n, a, sum = 0;
		cin >> n;
		for (long long i = 0; i < n; i++)
		{
			cin >> a;
			sum += a;
		}
		if (isPerfect(sum))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}