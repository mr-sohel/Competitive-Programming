#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[113];
    int t,len,ck,y = 2018,i,count = 0;
    cin>>t;
    while(t--)
    {
        scanf("%s", ch);
        getchar();
        len = strlen(ch);
        if (len == 12)
            cout<<"Happy New Year-"<<y<<endl;
        else if(len > 12)
        {
            ck = len - 12;
            cout<<"Happy New Year-"<<y+ck<<endl;
        }

        ck = 0;
    }
}
