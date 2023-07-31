#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    if (a > 0 && b > 0 && c > 0)
    {
        if (a >= (b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
         if ((a*a) == ((b*b) + (c*c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
         if ((a*a) > ((b*b) + (c*c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
         if ((a*a) < ((b*b) + (c*c)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
         if (a == b && b == c && c == a)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a != b) || (b != c) || (c != a))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
