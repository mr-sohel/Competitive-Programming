#include<stdio.h>

int main()
{
   int n,t, i,j,s;
   scanf("%d", &t);
   for (j = 0; j < t; j++)
   {
        scanf("%d", &n);
        for (i = 2; i <= n-1; i++)
        {
            s = n % i;
            if (s == 0)
            {
                printf("%d nao eh primo\n",n);
                break;
            }
        }
        if (s! = 0)
        printf("%d eh primo\n", n);
    }
    return 0;

}
