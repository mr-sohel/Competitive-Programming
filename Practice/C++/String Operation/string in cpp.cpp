#include <bits/stdc++.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    char s[100];
    char ch = ' ';
    int i,j;
    scanf("%[^\n]", s);
    //cin>>ch;
    for (i = 0, j = 0; i < strlen(s); i++)
    {
        if ((s[i] != ch))
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
    cout<<s<<endl;
}
