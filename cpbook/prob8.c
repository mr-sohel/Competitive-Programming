#include <stdio.h>

int main()
{
    int T,n1,n2,n3,i,j,temp = 0,low,middle,high;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d%d%d", &n1,&n2,&n3);
        if (n1 < n2 && n1 < n3)
        {
            low = n1;
        }
        else if (n2 < n1 && n2 < n3)
        {
            low = n2;
        }
        else if (n3 < n1 && n3 < n2)
        {
            low = n3;
        }
        if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2))
        {
            middle = n1;
        }
        else if ((n2 > n1 && n2 < n3)||(n2 > n3 && n2 < n1))
        {
            middle =n2;
        }
        else if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1))
        {
            middle = n3;
        }
        if (n1 > low && n1 > middle)
        {
            high = n1;
        }
        else if (n2 > low && n2 > middle)
        {
            high = n2;
        }
        else if (n3 > low && n3 > middle)
        {
            high = n3;
        }
        printf("Case %d: %d %d %d\n",i, low,middle,high);
    }
    return 0;

}
