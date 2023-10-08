#include <stdio.h>

int main()
{
    int x[100], n, i, position, value;
    printf("Enter The Size Of Array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter The Position and Then Value\n");
    scanf("%d %d", &position, &value);
    for (i = n + 1; i >= position - 1; i--)
    {
        x[i] = x[i - 1];
    }
    x[position - 1] = value;
    printf("After Inserting Value\n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", x[i]);
    }
    return 0;
}
