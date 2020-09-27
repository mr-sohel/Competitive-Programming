#include <stdio.h>

int main()
{
    int T,r1,r2,b,i;
    float rr,cr;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d%d%d", &r1, &r2,&b);
        cr = r2 / (50.0 -(b/6.0));
        rr = (((r1+1.0) - r2)/ (b/6.0));
        printf("%.2f %.2f\n",cr,rr);
    }
    return 0;
}
