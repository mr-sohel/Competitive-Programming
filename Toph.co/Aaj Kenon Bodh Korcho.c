#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j;
    char string[100001];
    char ch = '\\';
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
        {
            int b = 0,r = 0,len = 0;
            scanf("%s", string);
            len =strlen(string);
            for(i = 0; i < len; i++)
            {
                if (string[i] == 'B')
                {
                    b++;
                }
                else if (string[i] == 'M')
                {
                    r++;
                }
            }
            if(b > r)
                printf("Case #%d: Aaj Kemon Bodh Korcho\n", j);
            else if( r > b)
                printf("Case #%d: Hala Madrid\n", j);
            else
                printf("Case #%d: Meh:%c\n", j,ch);
        }
    return 0;
}
