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
 
int countDivisor(int n) {
	int cnt = 0;
	for(int i = 1; i*i <= n; i++) {
		if(i*i == n) cnt++;
		else if(n % i == 0) cnt+=2;
	}
	return cnt;
}
 
int main()
{
	//freopen("/home/sohel/Documents/my_codes/out.txt", "wt", stdout);
	unsyncIO;
	int t;
	cin>>t;
	while(t--) {
		int n1,n2,gcd;
		cin>>n1>>n2;
		gcd = gcd(n1,n2);
		cout<<countDivisor(gcd)<<endl;
	}
    return 0;
} 