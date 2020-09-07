#include <stdio.h>
#include <stdlib.h>
void recurse(int count)
{
    if (count == 5)
        return;
    printf("Hurray, I am Learning Recursion! %d\n", count);

    recurse(count+1);
    printf("Resursion is easy %d\n", count);
}
int main()
{
    recurse(1);
    return 0;
}