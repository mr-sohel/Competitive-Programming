#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,kase = 1;
    cin>>t;

    while(t--)
    {
        int i,temp2,position = 0,n,ocr[100] = {0},temp;
        cin>>n;
        int numb[n];
        for(int i = 0; i < n; i++)
            cin>>numb[i];
        for(int i = 0; i < n; i++)
        {
            ocr[numb[i]-1]++;
        } 
        temp = ocr[numb[0]-1];
        for(int i = 0; i < n; i++)
        {
           // cout<<temp<<endl;
            if(ocr[numb[i]-1] > temp)
            {
                temp = ocr[numb[i]-1];
                position = i;
            }
        }

        if(ocr[numb[position]-1] == 1)
        {
            temp2 = numb[0];
            for(int i = 1; i < n; i++)
            {
                if(numb[i] > temp2)
                    temp2 = numb[i];
            }
            cout<<"Case "<<kase<<": "<<temp2<<' '<<ocr[numb[position]-1]<<endl;
        }
       else if(temp >= 2)
       {
           for()
       }
        else
            cout<<"Case "<<kase<<": "<<numb[position]<<' '<<ocr[numb[position]-1]<<endl;

        kase++;
    }
    return 0;
}