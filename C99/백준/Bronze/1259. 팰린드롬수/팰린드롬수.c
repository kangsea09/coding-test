#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];

    while (1) {
        scanf("%s", str);
        if (strcmp(str, "0") == 0) break;

        int len = strlen(str);
        int result = 1;

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                result = 0;
                break;
            }
        }

        if (result)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}