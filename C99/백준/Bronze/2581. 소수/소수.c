#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);

    int sum = 0;
    int min_prime = 0;

    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min_prime == 0) min_prime = i; // 첫 소수 저장
        }
    }

    if (sum == 0) {
        printf("-1\n");
    } else {
        printf("%d\n%d\n", sum, min_prime);
    }

    return 0;
}