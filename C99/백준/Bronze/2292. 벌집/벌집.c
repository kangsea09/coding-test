#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long a = 1;
    while (1) {
        long long max_num = 3 * a * (a - 1) + 1;
        if (n <= max_num) {
            printf("%lld\n", a);
            break;
        }
        a++;
    }
    return 0;
}