#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        double x1, x2, y1, y2, ans;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        printf("Case %d: %.4lf\n", i, sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2))));
    }
    return 0;
}
