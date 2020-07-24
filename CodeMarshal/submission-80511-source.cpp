#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll a)
{
    return (a*(a+1))/2LL;

}

int main()
{


        ll a, b;

        while(cin>>a>>b)
	{
            if(a>b) swap(a, b);

            ll sum = f(b) - f(a-1);

            cout<<"Sum of "<<a<<" to "<<b<<" is -> "<<sum<<";"<<endl;

        }





}
