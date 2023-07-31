#include <stdio.h>

int main()
{
    int note[6], coin[6];
    double N;
    scanf("%lf", &N);
    note[0] = N / 100;
    N = N - (note[0] * 100);
    note[1] = ( N / 50);
    N = N - (note[1] * 50);
    note[2] = (N / 20);
    N = N - (note[2] * 20);
    note[3] = N / 10;
    N = N - (note[3] * 10);
    note[4] = (N / 5);
    N = N - (note[4] * 5);
    note[5] = N / 2;
    N = N - note[5] * 2;
    coin[0] = N / 1.00;
    N = N - (coin[0] * 1.00);
    coin[1] = (N / 0.50);
    N = N - (coin[1] * 0.50);
    coin[2] = N / 0.25;
    N = N - (coin[2] * 0.25);
    coin[3] = (N / 0.10);
    N = N - (coin[3] * 0.10);
    coin[4] = N / 0.05;
    N = N - (coin[4] * 0.05);
    coin[5] = (N / 0.01);
   printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", note[0]);
    printf("%d nota(s) de R$ 50.00\n", note[1]);
    printf("%d nota(s) de R$ 20.00\n",note[2]);
    printf("%d nota(s) de R$ 10.00\n", note[3]);
    printf("%d nota(s) de R$ 5.00\n", note[4]);
    printf("%d nota(s) de R$ 2.00\n", note[5]);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", coin[0]);
    printf("%d moeda(s) de R$ 0.50\n", coin[1]);
    printf("%d moeda(s) de R$ 0.25\n", coin[2]);
    printf("%d moeda(s) de R$ 0.10\n", coin[3]);
    printf("%d moeda(s) de R$ 0.05\n", coin[4]);
    printf("%d moeda(s) de R$ 0.01\n", coin[5]);

}
