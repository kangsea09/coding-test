#include <stdio.h>

int main() {
    int n, x, y;
    int paper[100][100] = { 0 };
    int count = 0;

    scanf("%d", &n);

    for (int k = 0; k < n; k++) {
        scanf("%d %d", &x, &y);

        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                paper[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1)
                count++;
        }
    }

    printf("%d", count);
    return 0;
}