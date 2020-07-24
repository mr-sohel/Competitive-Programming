#include <stdio.h>

int main()
{
    int i,start, end, sum = 0;
    scanf("%d%d", &start, &end);
    if (start < end)
    {
       while(start <= end)
        {
            if (start % 13 != 0)
            {
                sum += start;
            }
            start++;
        }
        printf("%d\n", sum);
    }
    else if(start > end)
    {
        while(start >= end)
        {
            if (start % 13 != 0)
            {
                sum += start;
            }
            start= start - 1;
        }
        printf("%d\n", sum);
    }


    return 0;
}
