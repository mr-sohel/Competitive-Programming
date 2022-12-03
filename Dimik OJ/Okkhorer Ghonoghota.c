#include <stdio.h>
#include <string.h>

int main() {
    int i, j, t, len = 0, num = 0;
    char str[10000];
    char ch, ch1;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        getchar();
        scanf("%[^\n]", str);
        getchar();
        scanf("%c", &ch);
        len = strlen(str);
        for (j = 0; j < len; j++) {
            if ((str[j] == ch)) {
                num++;
            }
        }
        if (num != 0 ) {
            printf("Occurrence of '%c' in '%s' = %d\n", ch, str, num);
        } else if (num == 0) {
            printf("'%c' is not present\n", ch);
        }
        num = 0;
    }
    return 0;
}
