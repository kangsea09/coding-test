#include <stdio.h>

int main() {
    char word[5][16];
    int max_len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", word[i]);
        int len = strlen(word[i]);
        if (len > max_len) {
            max_len = len;
        }
    }

    for (int i = 0; i < max_len; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < strlen(word[j])) {
                printf("%c", word[j][i]);
            }
        }
    }

    return 0;
}