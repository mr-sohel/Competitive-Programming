#include <stdio.h>
#define ll unsigned long long
int main()
{
    ll a, b,temp, i = 0;
    scanf("%llu%llu", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a % 2 == 0)
    {
        a++;
        for (; a <= b; a+=2)
        i++;
            printf("%llu\n", i);
    }   
    else
    {
        for (; a <= b; a += 2)
        {
                i++;
        }
        printf("%llu\n", i);
    }
 return 0;
}