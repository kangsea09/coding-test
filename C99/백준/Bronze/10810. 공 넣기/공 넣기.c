#include <stdio.h>

int main() {
    int n, m;
    int arr[101] = {0};

    scanf("%d %d", &n, &m);

    for (int t = 0; t < m; t++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int x = i; x <= j; x++) {
            arr[x] = k;
        }
    }

    for (int x = 1; x <= n; x++) {
        printf("%d ", arr[x]);
    }
    return 0;
}
