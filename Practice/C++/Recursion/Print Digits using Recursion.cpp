#include <bits/stdc++.h>

using namespace std;

void f(int n, int m) {
	int temp;
	if(m == 0) {
		cout<<0; 
		return;
	}
	if(n == 0)
		return;
	 temp = n % 10;
	 f(n/10,m);
	 cout<<temp<<" ";
}

int main() 
{
    //freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
    //unsyncIO;
	int t, n;
	cin>> t;
	while(t--) {	
		cin>>n;
		f(n,n);
		cout<<endl;
	}
    return 0;
}
