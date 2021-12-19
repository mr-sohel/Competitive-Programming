#include <bits/stdc++.h>

using namespace std;

void print(int a[], int i, int n) {
	if (i >= n)	return;
	cout << a[i] << " " << a[n - 1] << endl;
	print(a, i + 1, n - 1);
	
	
}

int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i < n; i++) {
		cin>>a[i];
	}
	print(a,0,n);
	return 0;
}