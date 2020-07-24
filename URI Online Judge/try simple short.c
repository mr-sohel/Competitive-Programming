#include <stdio.h>

int main()
{
    int a, b, c, smaller, middle, big;
    scanf("%d%d%d", &a, &b, &c);

    if(a < b && a < c)
    {
        smaller = a;
    }
    else if (b < a && b < c)
    {
        smaller = b;
    }
    else
    {
        smaller = c;
    }
    if ( a > b && a > c)
    {
        big = a;
    }
    else if (b > a && b > c)
    {
        big = b;
    }
    else
    {
        big = c;
    }
    if (smaller < a && big > a)
    {
        middle = a;
    }
    else if (smaller < b && big > b)
    {
        middle = b;
    }
    else
    {
        middle = c;
    }

    printf("%d\n%d\n%d\n\n", smaller, middle, big);
    printf("%d\n%d\n%d\n", a,b,c);
    return 0;
}
