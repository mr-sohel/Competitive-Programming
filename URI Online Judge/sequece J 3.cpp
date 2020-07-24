#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,a = 7,b;
    for(i = 1; i <= 9; i = i+2)
    {
        for(j = a; j >= a-2; j--)
        {
            printf("I=%d J=%d\n", i,j);
        }
        a+=2;
    }
    return 0;
}
