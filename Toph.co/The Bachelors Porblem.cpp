#include <stdio.h>

int main()
{
    int t,i,j,n1,n2,n3,n4,n5,n6,b,m1,m2,m3,m4,m5,m6,result;
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        scanf("%d%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5,&n6);
        scanf("%d", &b);
        scanf("%d%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5,&m6);


        result = n1+n2+n3+n4+n5+n6+m1+m2+m3+m4+m5+m6 - b;
        if (result < 0)
            result = 0;
        printf("Case %d: %d\n", j+1,result);
        result = 0;
        //m1 = 0, n1 = 0,temp = 0;
    }
}
