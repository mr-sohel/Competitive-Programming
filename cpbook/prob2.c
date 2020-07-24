#include <stdio.h>
#include <string.h>


int main()
{
    char ch[101];
    int i,t,len=0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", &ch);
        len = strlen(ch);
        if (ch[len-1] % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
