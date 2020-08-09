#include <stdio.h>

int main()
{
   int N, i;
   unsigned long long int f = 1;
   scanf("%d", &N);
   if (N <= 50)
   {
       for(i=1; i <= N; i++)
        {
            f *=i;
        }
        printf("%llu\n", f);
   }

    return 0;
  }
