#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a;
        long long b;
        scanf("%d %lld", &a, &b);

        a %= 10;
        if (a == 0) {
            printf("10\n");
            continue;
        }

        int cycle[4];
        int len = 0;
        int temp = a;

        do {
            cycle[len++] = temp;
            temp = (temp * a) % 10;
        } while (temp != cycle[0]);

        int index = (b - 1) % len;
        printf("%d\n", cycle[index]);
    }

    return 0;
}
