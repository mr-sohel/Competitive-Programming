#include<bits/stdc++.h>

int main()
{
    int  t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        if(n>10)
        {
            printf("%d %d\n",n-10,n-(n-10));

        }
        else
        {
            printf("0 %d\n",n);
        }
    }
return 0;
}
