#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, t, count = 0;
    char s[10001];
    char ch;
    cin >> t;
    getchar();
    while (t--) {
        scanf("%[^\n]", s);
        getchar();
        scanf("%c", &ch);
        for (i = 0; i < strlen(s); i++) {
            if (ch == s[i])
                count++;
        }
        if (count != 0)
            printf("Occurrence of '%c' in '%s' = %d\n", ch, s, count);
        else
            printf("'%c' is not present\n", ch);
        count = 0;
        getchar();
    }
    return 0;
}