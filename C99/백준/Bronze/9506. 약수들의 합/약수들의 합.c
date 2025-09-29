#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;

        int sum = 0;
        int divisors[100000];
        int cnt = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                divisors[cnt++] = i;
                sum += i;
            }
        }

        if (sum == n) {
            printf("%d = %d", n, divisors[0]);
            for (int i = 1; i < cnt; i++) {
                printf(" + %d", divisors[i]);
            }
            printf("\n");
        } else {
            printf("%d is NOT perfect.\n", n);
        }
    }
    return 0;
}