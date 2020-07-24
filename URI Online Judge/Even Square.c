#include <stdio.h>

int main()
{
    int n,i,num;
    scanf("%d", &n);
    if (n > 5 && n < 2000)
    {
        num = n;
        for (i = 1, n = 1; i <= num; i++)
        {
            if (n % 2 == 0)
            {
                printf("%d^2 = %d\n",n,(n*n));
            }
            n++;
        }
    }
    return 0;
}
