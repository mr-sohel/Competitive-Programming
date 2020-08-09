#include <stdio.h>

int shorta1(int a, int b, int c)
{
    int temp;
    if(a < b && a < c)
    {
        temp = a;
    }
    else if (b < a && b < c)
    {
        temp = b;
    }
    else
    {
        temp = c;
    }
    return temp;

}
int shorta2(int a, int b, int c)
{
    int temp1;
    if ( a > b && a > c)
    {
        temp1 = a;
    }
    else if (b > a && b > c)
    {
        temp1 = b;
    }
    else
    {
        temp1 = c;
    }
    return temp1;
}
int shorta3(int a, int b, int c)
{
    int temp2;
    if (a < b && b > c)
    {
        temp2 = b;
    }
    else if (b  < a && a < c)
    {
        temp2 = a;
    }
    else
    {
        temp2 = c;
    }
    return temp2;
}

int main()
{
    int a, b, c, smaller, middle, big;
    scanf("%d%d%d", &a, &b, &c);
    smaller = shorta1(a, b, c);
    middle = shorta3(a, b, c);
    big = shorta2(a, b, c);


    printf("%d\n%d\n%d\n", smaller, middle, big);
    return 0;
}
