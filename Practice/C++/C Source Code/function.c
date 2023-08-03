#include <stdio.h>

int sum(int a, int b)
{
    int t;
    t = (a + b);
    return t;
}

int main()
{
    int x,y,s;
    scanf("%d%d", &x, &y);
    s = sum(x,y);
    printf("%d\n", s);
}
