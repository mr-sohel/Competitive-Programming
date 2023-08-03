#include <stdio.h>

int maximum (int a, int b, int c)
{
    int maximum;
    if (a > b && a > c )
        {
            maximum = a;
        }
        else if (b > a && b > c)
        {
            maximum = b;
        }
        else
        {
           maximum = c;
        }
    return maximum;
}
int minimun(int a, int b, int c)
{
    int minimum;
    if (a < b && a < c)
       minimum = a;
    else if (b < a && b < c)
       minimum = b;
    else
        minimum = c;
    return minimum;
}
int main()
{
    int a,b,c,i, max, min, mid, N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        if (a <=200 && b <=200 && c <=200 )
        {
            max = maximum(a,b,c);
            min = minimun(a,b,c);

            if (a < max && a > min)
            {
                printf("Case %d: %d\n",i+1, a);
            }
            else if (b < max && b > min)
            {
                printf("Case %d: %d\n",i+1, b);
            }
            else if (c < max && c > min)
            {
                printf("Case %d: %d\n",i+1, c);
            }
            if (a == b && b == c && c == a)
            {
                continue;
            }
            else if (a == b)
            {
                printf("Case %d: %d\n",i+1, a);
            }
            else if (a == c)
            {
                printf("Case %d: %d\n",i+1, c);
            }
            else if (b == c)
            {
                printf("Case %d: %d\n",i+1, b);
            }

        }

    }
    return 0;
}
