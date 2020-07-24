#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,len,sum;
    char bll[100];
    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        scanf("%s",bll);
        getchar();
        len = strlen(bll);
        for (j = 0; j < len; j++)
        {
            if (bll[j] == '1'|| bll[j] == '2' || bll[j] == '3' || bll[j] == '4' || bll[j] == '5' || bll[j] == '6' || bll[j] == '0' || bll[j] == 'O')
            {
                sum++;
            }
        }
        if(sum >= 6)
        {
             printf("%d BALLS\n", sum);
             if(sum % 6 == 0)
             {
                 printf("%d OVER\n", sum/6 );
             }
             else
             {
                 printf("%d OVER %d BALLS\n", sum/6,sum % 6);
             }
        }
        else
        {
            printf("%d BALLS\n", sum);
        }
    }
    return 0;
}
