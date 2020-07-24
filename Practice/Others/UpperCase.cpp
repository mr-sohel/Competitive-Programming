#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[10000];
    int j = 0,i,n;
    cin>>n;
    while(n--)
    {
        scanf(" %[^\n]", ch);
        printf("Case: %d ", j+1);
        for (i = 0; i < strlen(ch); i++)
        {
           printf("%c", toupper(ch[i]));
        }
        printf("\n");
        j++;
        //getchar();
    }
}