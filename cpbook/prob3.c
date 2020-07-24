#include <stdio.h>

int main()
{
    int i,num = 1;
    for (i = 1000; i >= 1; i--,num++)
    {
        printf("%d\t", i);
        if (num == 5)
        {
            printf("\n");
            num = 0;
        }
    }
    return 0;
}
