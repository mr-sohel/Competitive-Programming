#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,i,j;
    cin>>w;
    if(w <= 2)
        cout<<"NO"<<endl;
    else
    {
         for(i = 2; i <= w; i = i + 2)
         {
             for( j = 2; j < w; j = j + 2)
             {
                 if((i + j) == w)
                 {
                     cout<<"YES"<<endl;
                     break;
                 }
             }
             if (i+j == w)
                break;
         }
        if (i+j !=  w)
         cout<<"NO"<<endl;
    }
    return 0;
}
