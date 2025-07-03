#include <stdio.h>
int main(void) {
    int A, B, C;                      // 1. 입력받을 변수 3개 선언
    scanf("%d %d %d", &A, &B, &C);    // 2. 정수 3개를 입력받아 A, B, C에 저장

    printf("%d\n",(A + B) % C);                 // 3-1. (A+B)%C 의 결과값 출력
    printf("%d\n", ((A % C) + (B % C)) % C);    // 3-2. ((A%C)+(B%C))%C 의 결과값 출력
    printf("%d\n", (A * B) % C);                // 3-3. (A×B)%C 의 결과값 출력
    printf("%d\n", ((A % C) * (B % C)) % C);    // 3-4. ((A%C)×(B%C))%C 의 결과값 출력

    return 0;
}