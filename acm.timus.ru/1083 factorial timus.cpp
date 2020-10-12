#include <stdio.h>
#include <string.h>

int main() {
    int i;
    long long f = 1;
    char s[21];
    int n, k = 0;
    scanf("%d", &n);
    scanf(" %s", s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '!')
            k++;
    }
    for (i = n; i > 0; i = i - k) {
        f *= i;
    }
    printf("%lld\n", f);
    return 0;
}