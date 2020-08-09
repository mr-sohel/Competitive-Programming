#include <bits/stdc++.h>
using namespace std;
#include <string.h>
int main()
{
    char s[33],s2[33];
    scanf("%s", s);
    int i,j;
    for(i = 0, j = strlen(s)-1; i < strlen(s);j-- ,i++)
    {
        s2[j] = s[i];
    }
    printf("%s\n",s2);
}
