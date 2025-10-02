#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N == 1) return 0;

    for (int i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            printf("%d\n", i);
            N /= i;
        }
    }

    if (N > 1) {
        printf("%d\n", N);
    }

    return 0;
}