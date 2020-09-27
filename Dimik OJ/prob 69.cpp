#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t,ck,count;
    char s[10001];
    cin>>t;
    while(t--)
    {
        count = 0,ck = 0;
        scanf(" %[^\n]", s);
        for(int i = 0; i < strlen(s); i++)
        {
            if(ck == 0)
            {
                if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9' || s[i] =='\'' )
                {
                    count++;
                    ck = 1;
                }
            }
            else if (s[i] == ' ')
                ck = 0;

        }
        cout<<"Count = "<<count<<endl;
    }
    return 0;
}
