#include <stdio.h>
int main(void) {
    int a, b;                  // 1. (1)과 (2) 위치에 들어갈 세 자리 자연수를 저장할 변수 2개 선언
    scanf("%d %d", &a, &b);    // 2. 정수 2개를 입력받아 a와 b에 저장

    printf("%d\n", a * (b % 10));          // 3-1. a * (b % 10) 의 결과값 출력
    printf("%d\n", a * (b % 100 / 10));    // 3-2. a * (b % 100 / 10) 의 결과값 출력
    printf("%d\n", a * (b / 100));         // 3-3. a * (b / 100) 의 결과값 출력
    printf("%d\n", a * b);                 // 3-4. a * b 의 결과값 출력

    return 0;
}