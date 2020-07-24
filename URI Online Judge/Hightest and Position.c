#include <stdio.h>

int main()
{
    int i, num, position = 0,start;
    scanf("%d", &start);
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &num);
        if(start < num)
        {
            start = num;
            position = 1+i;
        }
    }
    printf("%d\n", start);
    printf("%d\n", position);
}
