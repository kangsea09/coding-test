#include <stdio.h>

int main() {
    long long A, B, V;
    scanf("%lld %lld %lld", &A, &B, &V);

    long long days = (V - B + (A - B - 1)) / (A - B);

    printf("%lld\n", days);
    return 0;
}