#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char n[100000] = "10 1 52 55 12 -2 1000 -50 20 7 445";
    char *p, *e;
    long input;
    int count=0;
    p = n;
    for (p = n; ;p = e)
    {
        input = strtol(p,&e,10);
        if (p == e)
        {
            break;
        }
        count++;
    }
    printf("%d\n", count);
}
