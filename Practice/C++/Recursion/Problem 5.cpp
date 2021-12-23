#include <bits/stdc++.h>

using namespace std;

int poly_calc(int i, int x, int n) {
	if(n == 0)
		return 1;
	//cout<<i<<endl;
	if(i < n)
		return (int)pow(x,i) + poly_calc(i+1, x, n);
	return 0;
}

int main() 
{
	int x, n;
	cin>>x>>n;
	cout<<poly_calc(0, x , n);
	return 0;
}
