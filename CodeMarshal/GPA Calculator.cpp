#include <stdio.h>

int main()
{
    int t, subs, i;
    float grade, grade_total = 0.0;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &subs);
        int temp = subs;
        while (subs--)
        {
            scanf("%f", &grade);
            grade_total += grade;
        }
        printf("Case %d: %.3f\n", i, grade_total / temp);
        grade_total = 0.0;
    }
    return 0;
}