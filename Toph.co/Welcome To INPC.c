#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char name[10];
    scanf("%d", &n);
    if (n >= 1 && n <= 100)
    for (i = 0; i < n; i++)
    {
       scanf("%s", name);
       printf("Welcome %c%s\n", toupper(name[0]), name+1);
    }
    return 0;
}
