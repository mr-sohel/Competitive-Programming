#include <stdio.h>

int main()
{
    int n,i,j,temp;
    scanf("%d", &n);
    temp = n;
    for (j = 1;  temp >= j; j++)
    {
        for (i = 1; i <= j; i++)
        {
            printf("%d", n);
        }
        n--;
        printf("\n");
    }
}
