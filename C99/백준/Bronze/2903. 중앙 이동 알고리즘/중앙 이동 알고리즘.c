#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = (int)pow(2, n) + 1;
    int result = size * size;

    printf("%d", result);
    return 0;
}