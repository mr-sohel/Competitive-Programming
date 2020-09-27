#include <stdio.h>

int main()
{
    int i,t,a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
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
