#include <bits/stdc++.h>

using namespace std;

int main()
{
    double i ,j;
    for(i = 0; i <= 2;i = i + 0.2)
    {
        j = 1;

        for(int k = 1; k <= 3;j++, k++)
        {
            cout<<"I="<<i<<" "<<"J="<<j+i<<endl;
        }
        
    }
    
    return 0;
}
