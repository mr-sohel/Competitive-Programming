#include <stdio.h>

int main()
{
    float x,i, y,result;
    int N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%f%f", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            result = x / y;
            printf("%.1f\n", result);
        }

    }
    return 0;
}
