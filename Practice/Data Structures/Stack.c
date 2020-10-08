#include <stdio.h>
//using namespace std;

int main()
{
    int stack[10],value,top,i,n;
    scanf("%d", &n);
    top = -1;
    for(i = 0; i < 10; i++)
    {
        //printf("%d Enter the value to push\n",i+1);
        scanf("%d", &value);

        if(top == 10)
        {
            printf("Stack Overflow\n\n");
            break;
        }
        else
        {
            top++;
            stack[top] = value;
        }
    }
    for(i = 0; i <= 9; i++)
        {
            printf("%d\n", stack[i]);
        }

}
