#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    if (X % 2 == 0)
    {
        X = X+2;
    }
    else
    {
        X = X +1;
    }
    printf("%d\n", X);
}
