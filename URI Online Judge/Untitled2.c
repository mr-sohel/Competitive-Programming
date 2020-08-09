#include <stdio.h>
int main()
{
    int N, i,j,a = 0;
    scanf("%d", &N);
    float num[N][3],sum[N],mul[3] = {2.0,3.0,5.0};
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%f", &num[i][j]);
        }
    }
    for(j = 0; j < N; j++, a = 0 )
    {
        for (i = 0; i < 3; i++,a++)
        {
            sum[j] += num[j][i] * mul[a];
        }
    }
    for(i = 0; i < N; i++)
    {
        printf("%.1f\n", sum[i]/10.0);
    }
    return 0;
}
