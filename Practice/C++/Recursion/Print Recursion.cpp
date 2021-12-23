#include <bits/stdc++.h>

using namespace std;

void f(int n) {
	if(n <= 0)
		return;
	cout<<"I love Recursion\n";
	f(n-1);
}

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
	int n;
	cin>>n;
	f(n);
    return 0;
}
