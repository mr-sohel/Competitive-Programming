#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,key,ck,pos = 0;
   long long ar[10000000];
   cin>>n;
   for(int i = 1; i <= 10000000; i++)
   {
        ar[pos] = 1+(i*(i-1))/2;
        pos++;
   }
   while(n--)
   {
       ck = 0;
        cin>>key;
        
        for(int i = 0; i <= 10000000; i++)
        {
            if(ar[i] == key)
            {
                ck = 1;
                break;
            }
        }
        if(ck == 1)
            cout<<'1'<<' ';
        else
            cout<<'0'<<' ';
   }
   return 0;
}