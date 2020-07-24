#include<stdio.h>
int main()
{
    int a,c,d;
    scanf("%d",&c);
    for(d=1;d<=c;d++){
        for(a=1;a<=5;a++){
            printf("%d %d\n",d,a);
        }
        printf("\n");
    }
    return 0;
}
