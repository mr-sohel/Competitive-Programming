#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>     /* strtol */

using namespace std;

int main()
{
    string num;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>num;
        int mainlong = 0;
        int charlong;
        for(int i=0; i < num.length(); i++)
        {
            mainlong = mainlong * 10 + ( num[i] - '0' );
        }
        int s = 0;
        for(int i = 0; i < 3; i++)
        {
            charlong = (num[i] - '0');
            s += pow(charlong, 3);
        }
        if(s == mainlong)
            cout<<mainlong<<" is an armstrong number!"<<endl;
        else
            cout<<mainlong<<" is not an armstrong number!"<<endl;
    }
    
    return 0;
}