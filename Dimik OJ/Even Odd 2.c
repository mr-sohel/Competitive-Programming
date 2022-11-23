#include <stdio.h>
#include <string.h>

int main() {
	int T, i, len = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		char ch[101];
		scanf("%s", &ch);
		len = strlen(ch);
		if (ch[len - 1] % 2 == 0) {
			printf("even\n");
		} else
			printf("odd\n");
	}
	return 0;
}
