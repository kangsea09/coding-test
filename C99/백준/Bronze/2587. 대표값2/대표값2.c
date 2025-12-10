#include <stdio.h>
#define MAX_SIZE 5

int main() {
    int arr[MAX_SIZE];
    int size = 5;
    int temp;
    int m=0;
    for (int i = 0; i < 5; i++) {
        int N;
        scanf("%d", &N);
        m += N;
        arr[i] = N;
    }

    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", m / 5);
    printf("%d", arr[2]);
    return 0;
}