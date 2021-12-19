#include <bits/stdc++.h>

using namespace std;

void rev(int a[], int n, int i) {
	if(i >= n)
		return;
	
	rev(a, n, i+1);
	cout<<a[i]<<" ";
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i< n; i++) {
		cin>>a[i];
	}
	rev(a,n,0);
	return 0;
}
