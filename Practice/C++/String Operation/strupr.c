#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%[^\n]s", str);
    printf("%s", strupr(str));
}
