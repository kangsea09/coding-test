#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int arr[MAX_SIZE];
    int N, k, x;
    int temp;
    scanf("%d %d", &N, &k);
    int size = N;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d", arr[k - 1]);
    return 0;
}