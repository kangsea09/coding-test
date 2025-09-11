#include <stdio.h>

int main() {
    char p[101];
    scanf("%s", p);

    int len = strlen(p);
    for (int i = 0; i < len / 2; i++) {
        if (p[i] != p[len - 1 - i]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}