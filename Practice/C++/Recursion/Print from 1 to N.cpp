#include <bits/stdc++.h>

using namespace std;

void f(int n) {
	if(n <= 0)
		return;
	f(n-1);
	cout<<n<<endl;
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
