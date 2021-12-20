#include <bits/stdc++.h>

using namespace std;

void rem(int i, int j, int *n, int *a) {
	
	if(i == *n) {
		*n = j;
		return;
	}
	if(a[i] % 2 == 0) {
		a[j++] = a[i];
	}
	rem(i+1,j, n, a);
	
	
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++) {
		cin>>a[i];
	}
	rem(0,0, &n, a);
	for(int i = 0;i < n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
