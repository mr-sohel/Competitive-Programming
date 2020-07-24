#include <stdio.h>

int main()
{
    int count=0,i = 0;
    char str[50];
    scanf("%[^\n]s", str);
    for (i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
