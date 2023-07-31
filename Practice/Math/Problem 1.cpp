#include <cstdio>
int main(void)
{
    unsigned int a = 0, b = 1, f,n, i = 1,sum = 0;

    while(i < 4000000)
    {
        f = a + b;
        if (f % 2 == 0)
            sum += i;
        a = b;
        b = f;
        i++;
    }
    printf("%u\n", sum);
    return 0;
}
