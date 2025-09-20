#include <stdio.h>

int main() {
    long long n;
    int b;

    scanf("%lld %d", &n, &b);

    char a[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char result[100];
    int x = 0;

    while (n > 0) {
        result[x++] = a[n % b];
        n /= b;
    }

    for (int i = x - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}