#include <stdio.h>

int main() {
    int n, c;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &c);

        int q = c / 25;
        c %= 25;

        int d = c / 10;
        c %= 10;

        int i = c / 5;
        c %= 5;

        int p = c;

        printf("%d %d %d %d\n", q, d, i, p);
    }
    return 0;
}