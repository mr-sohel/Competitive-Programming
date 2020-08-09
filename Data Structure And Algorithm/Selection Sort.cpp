#include <cstdio>

int main()
{
    int a[] = {10, 5,2,8,7};
    int temp, i,j, loc, small;
    
    for(i = 0; i < sizeof(a) / sizeof(a[0]) -1 ; i++)
    {
        small = a[i];
        for (j = i+1; j < sizeof(a) / sizeof(a[0]) ; j++)
        {
            if(a[j] < small)
            {
                small = a[j];
                loc = j; 
            }
        }
        if(i != loc)
        {
            temp = a[i];
            a[i] = small;
            a[loc] = temp;
        }
        for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    
        return 0;
}