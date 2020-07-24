#include <iostream>
using namespace std;

int main()
{
    long long a,b,temp,s1,s2;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        s1=((a-1)*((a-1)+1))/2;
        s2=(b*(b+1))/2;
        cout<<"Sum of "<<a<<" to "<<b<<" is -> "<<s2-s1<<";"<<endl;
    }
    return 0;
}
