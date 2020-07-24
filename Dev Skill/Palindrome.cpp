#include <stdio.h>
#include <string.h>

int main()
{
    int len,t,i,j,ck;
    char ch1[101],ch2[101];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", ch1);
        len = strlen(ch1);
        for(i = len-1,j=0; i >= 0;j++, i--)
        {
            ch2[j] = ch1[i];
        }
        ch2[j] = '\0';
       // printf("%s\n",ch2);
        ck = 0;
        for(i = 0; ch1[i] != '\0';i++)
        {
            if(ch1[i] == ch2[i])
            {

            }
            else
            {
                if((ch1[i] - ch2[i]) == 32)
                    ck = 0;
                else
                    ck = 1;
            }
        }
        if(ck==0)
           printf("Yes\n");
        else
           printf("No\n");
    }
}
