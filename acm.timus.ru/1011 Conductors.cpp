#include <cstdio>
int main() {
    int res = 0, a1, a2;
    double p, q;
    scanf("%lf%lf", &p, &q);
    do {
        res++, a1 = (int)(p * (double)res) / 100, a2 = (int)(q * (double)res - (1e-7)) / 100;
    } while (a1 == a2);
    printf("%d\n", res);
}