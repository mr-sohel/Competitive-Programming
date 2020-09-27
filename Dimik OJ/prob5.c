#include <stdio.h>

int main()
{
    int T,N,i,j,k;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (j = 0; j < N;j++)
        {
            for (k = 0; k < N; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
