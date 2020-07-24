#include <stdio.h>

int main()
{
    long long int a,b,result;
    int t,i;
    char ch;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld%lld", &a, &b);
        getchar();
        scanf("%c", &ch);
        if (ch == '+')
            result = a + b;
        else if (ch == '-')
            result = a - b;
        else if (ch == '*')
            result = a * b;
        else if (ch == '/')
            result = a / b;
        else if (ch == '%')
            result = a % b;
        printf("Case %d: %lld\n", i,result);
    }


}
