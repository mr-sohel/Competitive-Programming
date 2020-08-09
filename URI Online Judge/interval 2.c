#include <stdio.h>

int main()
{
    int i, N,count1 = 0, count2 = 0;
    scanf("%d", &N);
    int array[N];
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (array[i] >= 10 && array[i] <=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d in\n", count1);
    printf("%d out\n", count2);
    return 0;
}
