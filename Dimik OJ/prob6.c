#include <stdio.h>
#include <string.h>

int main()
{
    int i,l,t;
    char n[6];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s", n);
        l = strlen(n);
        printf("Sum = %d\n", (n[0]-48)+(n[l-1]-48));
    }
    return 0;
}
