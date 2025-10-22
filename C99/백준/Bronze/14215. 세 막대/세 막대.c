#include <stdio.h>
#include <stdlib.h>

int desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = { a, b, c };
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), desc);

    while (arr[0] >= arr[1] + arr[2]) {
        arr[0]--;
    }
    printf("%d", arr[0] + arr[1] + arr[2]);
    return 0;
}