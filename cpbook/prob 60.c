#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,k;
    char ara[1005],arr[1005];
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf(" %[^\n]", arr);
        for(k = 0,j = strlen(arr)-1; j >= 0;k++,j--)
        {
            ara[k] = arr[j];
        }
        ara[k] = '\0';
        printf("%s\n", ara);
    }
}