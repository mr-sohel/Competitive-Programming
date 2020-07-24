#include<stdio.h>

int main()
{
   int n, i, s,c = 0;
   scanf("%d", &n);
   for (s = n; s < n; s--)
   {
       for (i=2; i<=n-1; i++)
        {

             if (n%i!=0)
            {
                printf("prime\n");
                break;
            }
        }
   }

    //printf("%d\n", c);
}
