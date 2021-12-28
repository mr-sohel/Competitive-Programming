#include <bits/stdc++.h>

using namespace std;


long long fibo(int n) {
	
	if(n == 1)
		return 0;
	if (n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
	
}


int main() 
{
	//freopen("out.txt", "w", stdout);
	int n;
	cin>>n;
	cout<<fibo(n)<<"\n";  
	return 0;
}
