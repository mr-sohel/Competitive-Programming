#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t,kase = 1;
    cin>>t;
    while(t--)
    {

        double n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(((n2-n1) == (n3-n2)) && (n2 / n1) == (n3 / n2))
        {
            cout<<"Case "<<kase<<":"<<" Both"<<endl;
        }
        else if((n2-n1) == (n3-n2))
        {
          cout<<"Case "<<kase<<":"<<" Arithmetic Progression"<<endl;
        }
        else if((n2 / n1) == (n3 / n2))
        {
            cout<<"Case "<<kase<<":"<<" Geometric Progression"<<endl;
        }
        else
            cout<<"Case "<<kase<<":"<<" None"<<endl;
        kase++;
    }
    
    return 0;
}