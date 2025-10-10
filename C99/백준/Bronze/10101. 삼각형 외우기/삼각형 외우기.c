#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int sum = a + b + c;

    if (sum != 180) {
        printf("Error\n");
    } 
    else if (a == 60 && b == 60 && c == 60) {
        printf("Equilateral\n");
    } 
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}