#include <stdio.h>
#include <string.h>

int main()
{
        int i,j,t,cas,tmp,len1,len2;
        char num1[105],num2[105];
        scanf("%d",&cas);
        for(t=1;t<=cas;t++)
        {
                int n1[11],n2[11];
                for(i=0;i<10;i++)
                {
                        n1[i]=0;
                        n2[i]=0;
                }
               scanf("%s%s",&num1,&num2);
               len1=strlen(num1);
               len2=strlen(num2);
               for(i = 0;i < len1; i++)
               {
                       tmp=num1[i]-'0';
                       n1[tmp]=1;
               }
               for(i=0;i < len2;i++)
               {
                       tmp = num2[i]-'0';
                       n2[tmp] = 1;
               }
               int check=0;
               for(i=0;i<10;i++)
               {
                       if(n1[i]!=0&&n2[i]!=0)
                       {
                               printf("%d",i);
                               check=1;
                       }
               }
               if(check==0)
               printf("N");
               printf("\n");
        }
        return 0;
}