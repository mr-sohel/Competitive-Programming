#include <bits/stdc++.h>

using namespace std;

bool pon(int i,int sr, int n) {
	if(n <= 1) return false;
	if(i > sr) return true;
	if(n % i == 0) return false;
	return pon(i+1,sr,n);		
}

int main()
{
	int t, n;
	cin>>t;
	while(t--) {	
		cin>>n;
		if(pon(2,sqrt(n),n))
			cout<<"prime\n";
		else 
			cout<<"not prime\n";
	}
	return 0;
}
