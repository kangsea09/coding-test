#include <stdio.h>

int main() {
    int t, r;
    char s[21];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %s", &r, s);

        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < r; j++) {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
