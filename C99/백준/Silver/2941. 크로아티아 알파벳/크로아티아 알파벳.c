#include <stdio.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    int len = strlen(arr);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
            count++;
            i += 2;
        }
        else if ((arr[i] == 'c' && (arr[i + 1] == '=' || arr[i + 1] == '-')) ||
            (arr[i] == 'd' && arr[i + 1] == '-') ||
            (arr[i] == 'l' && arr[i + 1] == 'j') ||
            (arr[i] == 'n' && arr[i + 1] == 'j') ||
            (arr[i] == 's' && arr[i + 1] == '=') ||
            (arr[i] == 'z' && arr[i + 1] == '=')) {
            count++;
            i += 1;
        }
        else {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}