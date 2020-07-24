#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        double a,b,c,s,p,area;
        scanf("%lf%lf%lf", &a, &b, &c);
        s = (a+b+c) / 2.0;
        p = s*(s-a)*(s-b)*(s-c);
        area = sqrt(p);
        printf("Case %d: %.10lf\n",i+1, area);
    }
    return 0;
}
