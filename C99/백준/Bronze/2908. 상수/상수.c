#include <stdio.h>
#include <string.h>

int main() {
    char s[4];
    char n[4];

    scanf("%s %s", s, n);

    char temp = s[0];
    s[0] = s[2];
    s[2] = temp;

    temp = n[0];
    n[0] = n[2];
    n[2] = temp;

    if (strcmp(s,n)>0) {
        printf("%s", s);
    }
    else
        printf("%s", n);
    return 0;
}
