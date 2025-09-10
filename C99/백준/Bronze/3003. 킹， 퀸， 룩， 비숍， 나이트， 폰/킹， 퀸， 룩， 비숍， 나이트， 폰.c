#include <stdio.h>

int main() {
    int correct[6] = { 1, 1, 2, 2, 2, 8};
    int found[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &found[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", correct[i] - found[i]);
    }

    return 0;
}