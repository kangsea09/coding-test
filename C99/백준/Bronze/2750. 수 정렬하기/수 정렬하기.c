#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int N, n;
    scanf("%d", &N);

    int arr[MAX_SIZE];

    for (int z = 0; z < N; z++) {
        scanf("%d", &arr[z]);
    }

    int size = N;
    

    for (int i = size - 1; i > 0; i--) {    
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int p = 0; p < size; p++) {
        printf("%d\n", arr[p]);
    }
    return 0;
}