#include <stdio.h>

int main()
{
    int t,n,i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n >=90 && n <=100)
            printf("Student %d: A+\n",i);
        else if (n >= 80 && n <=89)
            printf("Student %d: A", i);
        else if (n >= 70 && n <= 79)
            printf("Student %d: A-",i);
        else if (n >=60 && n <= 69)
            printf("Student %d: B+\n",i);
        else if (n >= 50 && n <= 59)
            printf("Student %d: B-\n",i);
        else if (n >= 40 && n <= 49)
            printf("Student %d: C\n",i);
        else if (n >= 35 && n <= 39)
            printf("Student %d: D\n",i);
        else if (n >= 0 && n <=34)
            printf("Student %d: F\n",i);
    }
}
