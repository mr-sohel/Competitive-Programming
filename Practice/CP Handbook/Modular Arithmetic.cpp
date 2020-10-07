#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long m = 2,n,x = 1;
	cin>>n;
	for(int i = 2; i <= n; i++) {
		x = (x*i)%m;
	}
	cout<<x%m<<"\n";
}
