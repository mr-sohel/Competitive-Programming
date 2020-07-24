#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int number,temp,n = 0,r,s = 0;
        cin>>number;
        temp = number;

        while(temp != 0)
        {
            temp /= 10;
            ++n;
        }
        temp = number;
        while(temp != 0)
        {
            r = temp % 10;
            s += pow(r, n);
            temp /= 10;
        }
        if (s == number)
        {
            cout<<number<<" is an armstrong number!"<<endl;
        }
        else
        {
            cout<<number<<" is not an armstrong number!"<<endl;
        }
    }
    
}
