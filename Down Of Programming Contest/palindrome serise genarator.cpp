#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j,i,n;
    int palindrome[100] = {0};
    for( j = 0; ; )
    {
        for( i = 1; i <= 9;i++)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 11; i <= 100; i+= 11)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 101; i <= 200; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 202; i <= 300; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 303; i <= 400; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 404; i <= 500; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 505; i <= 600; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 606; i <= 700; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 707; i <= 800; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 808; i <= 900; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        for( i = 909; i <= 919; i+= 10)
        {
            palindrome[j] = i;
            j++;
        }
        break;        
    }

    for(i = 0; i < 100; i++)
    cout<<palindrome[i]<<endl;
    return 0;
}