#include <cstdio>
#define pi 3.141592654
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        double c;
        scanf("%lf", &c);
        printf("Case %d: %.3lf\n", i,(c / (2 * pi) * 2));
    }
    return 0;
}