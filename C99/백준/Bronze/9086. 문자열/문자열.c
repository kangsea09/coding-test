#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        int len = strlen(arr);
        printf("%c%c\n", arr[0], arr[len - 1]);
    }
    return 0;
}
