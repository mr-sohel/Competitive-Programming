#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, i,t;
    char ch[100];
    cin>>t;

    while(t--)
    {
        getchar();
        scanf("%[^\n]", ch);
        for(i = 0; i < strlen(ch); i++)
        {
            if(ch[i] == 'a' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'|| ch[i] == 'e')
                count++;
        }
        cout<<"Number of Vowels"<<" = "<<count<<endl;
        count = 0;
    }
    return 0;
}