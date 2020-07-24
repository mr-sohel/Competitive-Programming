#include <stdio.h>

int main()
{
    long int n,N,i;
    scanf("%ld", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%ld", &n);
        if (n >= 90 && n <= 100)
            printf("Student %ld: A+\n",i);
        else if (n >= 80 && n <= 89)
            printf("Student %ld: A\n", i);
        else if (n >= 70 && n <= 79)
            printf("Student %ld: A-\n",i);
        else if (n >= 60 && n <= 69)
            printf("Student %ld: B+\n",i);
        else if (n >= 50 && n <= 59)
            printf("Student %ld: B-\n",i);
        else if (n >= 40 && n <= 49)
            printf("Student %ld: C\n",i);
        else if (n >= 35 && n <= 39)
            printf("Student %ld: D\n",i);
        else //if (n <= 34)
            printf("Student %ld: F\n",i);
    }
}
