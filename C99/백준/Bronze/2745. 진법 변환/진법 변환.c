#include <stdio.h>
#include <string.h>

int main() {
    char n[36];
    int b;
    long long result = 0;

    scanf("%s %d", n, &b);

    int len = strlen(n);
    for (int i = 0; i < len; i++) {
        char ch = n[i];
        int value;

        if ('0' <= ch && ch <= '9')
            value = ch - '0';
        else
            value = ch - 'A' + 10;

        result = result * b + value;
    }

    printf("%lld", result);
    return 0;
}