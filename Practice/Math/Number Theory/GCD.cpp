#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { //assuming a >= b
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a,b, ans;
    cin>>a>>b;
    if(a < b)
      swap(a,b);
    ans = __gcd(a,b);  
 //    ans = gcd(a,b);
   
    cout<<ans<<endl;
    return 0;
}
