#include <stdio.h>

int main() {
    int n;
    
    // 바이트의 크기를 N에 저장한다. 
    scanf("%d", &n);
    
    // N을 4로 나눈 수 만큼 long을 출력한다.
    for(int i=0; i<(n/4); i++) printf("long ");
    
    // 마지막으로 int를 출력
    printf("int");
    
    return 0;
}