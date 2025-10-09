#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b;
    int x_min = 10000, y_min = 10000;
    int x_max = -10000, y_max = -10000;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a < x_min) x_min = a;
        if (a > x_max) x_max = a;
        if (b < y_min) y_min = b;
        if (b > y_max) y_max = b;

    }
    printf("%d", (x_max - x_min) * (y_max - y_min));
    return 0;
}