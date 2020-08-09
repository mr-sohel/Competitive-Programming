#include <bits/stdc++.h>
#define endl "\n"
#define pi acos(-1)
#define faster_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


int main()
{
    //freopen("/home/sohel/Desktop/CPP Codes/out.txt", "wt", stdout);
    faster_io;

    int i = 5, j = 5, c , r, res = 0;
    int arr[i][j];

    for(i = 0; i < 5; i++)  
    {
        for(j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1){
                //cout<<i <<' '<<j;
                r = i, c = j;
            }     
        }
        //cout<<endl;
    }

    if(r > 2)
    {
        for(int i = 0; i < 5; i++)
        {
            res++;
            r--;
            if(r == 2)
                break;
        }
    }
    else if(r < 2)
    {
        for(int i = 0; i < 5; i++)
        {
            res++;
            r++;
            if(r == 2)
                break;
        }
    }

    if(c > 2)
    {
        for(int i = 0; i < 5; i++)
        {
            res++;
            c--;
            if(c == 2)
                break;
        }
    }
    else if(c < 2)
    {
        for(int i = 0; i < 5; i++)
        {
            res++;
            c++;
            if(c == 2)
                break;
        }
    }
    cout<<res<<endl;
    return 0;
}