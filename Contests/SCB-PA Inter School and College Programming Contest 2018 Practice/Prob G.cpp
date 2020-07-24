#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int d, x;
        scanf("%d %d", &x, &d);
        if (x <= 5)
            printf("Yes! The ant is Alive.\n");
        else
            printf("Sorry !the ant is nomore.\n");
    }
    return 0;
}