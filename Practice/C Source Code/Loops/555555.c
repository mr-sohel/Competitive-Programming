#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for (;n >= 1;n--)
    {
        i = n;
        while(i >= 1)
        {
            printf("%d", n);
            i--;
        }
        printf("\n");
    }
}
