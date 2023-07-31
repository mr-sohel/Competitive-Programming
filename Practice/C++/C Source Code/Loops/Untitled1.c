#include <stdio.h>
#include <math.h>

int main()
{
    int num,sq;
    scanf("%d", &num);
    sq = sqrt(num);
    if (sq * sq == num)
    {
        printf("YES\n");
    }
    else
        printf("NO");
}
