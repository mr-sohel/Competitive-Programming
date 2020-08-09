#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    char str[1000001];
    scanf(" %[^\n]", str);
    for(int i = 0; i < strlen(str); )
    {
        if(str[i] == ' ')
        {
            while(str[i] == ' ')
            {
                i++;
            }
            count++;
        }
        else
        {
            i++;
        }
    }
    count += 1;
    cout<<count<<endl;
    return 0;
}