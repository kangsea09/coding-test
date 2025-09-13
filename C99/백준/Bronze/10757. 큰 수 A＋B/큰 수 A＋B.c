#include <stdio.h>
#include <string.h>
#define MAX 1000001

int main() {
    char A[MAX], B[MAX];
    int result[MAX + 1] = {0};

    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);
    int i = lenA - 1, j = lenB - 1;
    int k = 0, carry = 0;

    while(i >= 0 || j >= 0 || carry) {
        int digitA = (i >= 0) ? A[i--] - '0' : 0;
        int digitB = (j >= 0) ? B[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        result[k++] = sum % 10;
        carry = sum / 10;
    }

    for(int idx = k - 1; idx >= 0; idx--)
        printf("%d", result[idx]);
    printf("\n");

    return 0;
}
