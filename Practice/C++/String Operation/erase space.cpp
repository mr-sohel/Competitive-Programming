#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    char s[50]= "Akash    Sohel A.Rahim Rasel Tuhin",s1[50];
    int i,j;
    for(i = 0,j = 0; i < strlen(s);i++)
    {
        if(s[i] == ' ')
        {
           // i++;
        }
        else
        {
            s1[j] = s[i];
            j++;
        }
    }
    s1[j] = '\0';
        cout<<s1<<endl;
}