#include <stdio.h>

int main()
{
    int T,i,a,b;
    scanf("%d", &T);
    for (i = 0; i < T; i ++)
    {
        scanf("%d%d", &a,&b);
        printf("Case %d: %d%d\n", i+1, (a+b),(a-b));
    }
    return 0;
}
