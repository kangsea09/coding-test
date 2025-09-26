#include <stdio.h>

int main() {
    long long x;
    scanf("%lld", &x);

    long long line = 1;
    long long sum = 0;

    while (x > sum + line) {
        sum += line;
        line++;
    }

    long long pos = x - sum;

    long long numerator, denominator;
    if (line % 2 == 0) {
        numerator = pos;
        denominator = line - pos + 1;
    }
    else {
        numerator = line - pos + 1;
        denominator = pos;
    }

    printf("%lld/%lld\n", numerator, denominator);
    return 0;
}