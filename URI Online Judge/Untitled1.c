#include <stdio.h>

int main()
{
    int a, i,s;
    scanf("%d", &a);
    for (i = 2; i <= a-1; i ++)
    {
        s = a % i;
    }
    if (s == 0)
        {
            printf("Prime\n");

        }

    if (s != 0 )
        {
            printf("Not Prime\n");

        }
    return 0;
}
