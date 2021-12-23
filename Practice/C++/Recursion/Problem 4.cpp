#include <bits/stdc++.h>

using namespace std;

void print(int i, int n) {
	if(i >= n)
		return;
	else if(i == 0)
		cout<<"1";
	else {
		if(i == 1)
			cout<<" + x";
		else
			cout<<" + x^"<<i;
	}
	print(i+1,n);
}


int main() {
	int n;
	cin >> n;
	print(0,n);
	return 0;
}
