#include <stdio.h>

int main() {
    char word[1000001];
    int count = 0;

    while (scanf("%s", word) != EOF) {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
