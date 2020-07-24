#include <stdio.h>

int main()
{
    int i,j,a[5], temp;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0 ; j < 5 ; j++)
	{
		for (i = 0 ; i < 5 -1 ; i++)
		{
			if (a[i+1] < a[i])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    for(i = 5; i > 0; i--)
    {
        printf("%d\n", a[i-1]);
    }
    return 0;
}

