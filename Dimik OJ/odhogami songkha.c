#include <stdio.h>

int main()
{
    int i = 1000,j;
    for (j = 1; i >= 1;i--,j++)
    {
        printf("%d\t",i);
        if (j == 5)
        {
            j = 0;
            printf("\n");
        }
    }
    return 0;
}
