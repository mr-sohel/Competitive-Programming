#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, N;
    char str[100];
    scanf("%d", &N);
    if (N >= 1 && N <= 10000)
    {
        fgets (str, 100, stdin);
        while( i < N)
        {
            fgets (str, 100, stdin);
            //gets(str);
            printf("Case %d: %s\n",i+1, strupr(str));
            i++;
        }
    }
    return 0;
}


