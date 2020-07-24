#include <stdio.h>

int main()
{
    int a,b,c,d;
    float avg, div;

    scanf("%d%d%d%d", &a, &b, &c, &d);
    avg = (a+b+c+d) / 4;
    div = (a + b) / (c + d);
    printf("%d\n", a + b + c + d);
    printf("%d\n",(a+b) -  (c+d));
    printf("%.2f\n", avg);
    printf("%.2f\n", div);

    return 0;
}
