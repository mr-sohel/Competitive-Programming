#include <stdio.h>

int main()
{
    int i,j,N,cout1 = 1,cout2 = 2, cout3=3;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {

       printf("%d %d %d PUM\n",cout1,cout2, cout3);
       cout1 =cout3+2;
       cout2 = cout3+3;
       cout3 = cout3+4;
    }
    return 0;
}
