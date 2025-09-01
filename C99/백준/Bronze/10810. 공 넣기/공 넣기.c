#include <stdio.h>

int main() {
    int n, m;
    int arr[101] = {0};  // 바구니 배열 (1~N 사용)

    scanf("%d %d", &n, &m);

    for (int t = 0; t < m; t++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);  // 구간과 공 번호 입력받기
        for (int x = i; x <= j; x++) {
            arr[x] = k;  // 해당 구간에 공 번호 채우기
        }
    }

    for (int x = 1; x <= n; x++) {
        printf("%d ", arr[x]);
    }
    return 0;
}
