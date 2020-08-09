#include <stdio.h>

int main()
{
    int max;
    printf("Enter the size of Stack\n");
    scanf("%d", &max);
    int st[max],top,n,i;
    top = 0;
    printf("How many data you want to push\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        if(top == max)
        {
             printf("Stack Overflow\n");
             break;
        }
        else if (top < max)
        {
            scanf("%d", &st[top]);
            top++;
        }
    }
    printf(" Stack is \n");
    for( i = 0; i < top; i++)
    {
        printf("%d ", st[i]);
    }
    printf("\n");
    if (top == 0)
        printf("Stack is Underflow\n");
    else
    {
        int item;
        item = st[top-1];
        top--;
        printf("We Deleted %d\n", item);
        for(i = 0; i < top; i++)
        {
            printf("%d ", st[i]);
        }
    }
    return 0;
}
