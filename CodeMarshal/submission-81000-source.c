#include<stdio.h>
int main()
{
    int a,b,s,n,d;
    scanf("%d %d",&a,&b);
    for(d=a;d<=b;d++){
         n=(((b-a)/1)+1);
    s=((a+b)*((b-a)+1))/2;

    }
    printf("Sum of %d to %d is -> %d;\n",a,b,s);
   return 0;
}
