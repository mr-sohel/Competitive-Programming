#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count = 0;
        char a[2],b[2],a1 = '\0',a2 = '\0',a3 = '\0',a4 = '\0',ck = '\0',gk = '\0';
        scanf("%s %s", a,b);
        if(a[0] == b[0])
        {
            count++;
            a1 = a[0];
        }    
        if(a[0] == b[1])
        {
            count++;
            a2 = a[0];
        }
        if(a[1] == b[0])
        {
            count++;
            a3 = a[1];
        }
        if(a[1] == b[1])
        {
            count++;
            a4 = a[1];
        }
        if (count == 0)
            cout<<"N"<<endl;
        else if(count == 1)
        {
            if(a1 != '\0')
                cout<<a1<<endl;
            else if(a2 != '\0')
                cout<<a2<<endl;
            else if(a3 != '\0')
                cout<<a3<<endl;
            else if(a4 != '\0')
                cout<<a4<<endl;
        }
        else if(count == 2)
        {
            if(a1 != '\0')
                if(ck == '\0')
                    ck = a1;
                else if(gk == '\0')
                    gk = a1;
            if(a2 != '\0')
            {
                if(ck == '\0')
                    ck = a2;
                else if(gk == '\0')
                    gk = a2;
            }
            if(a3 != '\0')
            {
                if(ck == '\0')
                    ck = a3;
                else if(gk == '\0')
                    gk = a3;
            }
            if(a4 != '\0')
            {
                if(ck == '\0')
                    ck = a4;
                else if(gk == '\0')
                    gk = a4;
            }
            if(ck > gk)
                cout<<gk<<ck<<endl;
            else
                cout<<ck<<gk<<endl;
        }
        else if(count == 4 )
        {
            cout<<a[0]<<endl;
        }
        //cout<<count<<endl;
    }
    return 0;
}


//problem is 12 22 --> it shows 22. i need 2