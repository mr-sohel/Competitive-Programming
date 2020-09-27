#include <stdio.h>
#include <math.h>

int main()
{
    int T,i,n,root;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &n);
        root = sqrt(n);
        if (root * root == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
