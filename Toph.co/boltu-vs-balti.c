#include <stdio.h>

int main()
{
    long long int e,s,y,x,sum = 0;
    while (scanf("%lld %lld", &s, &e))
    {
        if (e > s)
        {
            sum = 0;
            x = s, y = e;
            for (; x <= y; x++)
            {
                sum +=x;
            }
            printf("Sum of %lld to %lld is -> %lld;\n",s,e, sum);
        }
        else if (s > e)
        {
            sum = 0;
            x = s, y = e;
            for (; y <= x; y++)
            {
                sum +=y;
            }
            printf("Sum of %lld to %lld is -> %lld;\n",e,s, sum);
        }
    }

    return 0;
}
