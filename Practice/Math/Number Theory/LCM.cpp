#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { //assuming a >= b
	return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
	return (a/gcd(a,b)) * b;
}
int main()
{
    int a,b, ans;
    cin>>a>>b;
    if(a < b)
        swap(a,b);
     ans = lcm(a,b);
   
    cout<<ans<<endl;
    return 0;
}

