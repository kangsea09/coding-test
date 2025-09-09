#include <stdio.h>
#include <string.h>

int main() {
    char word[16];
    int total_time = 0;

    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        char ch = word[i];

        if (ch >= 'A' && ch <= 'C') {
            total_time += 3;
        }
        else if (ch >= 'D' && ch <= 'F') {
            total_time += 4;
        }
        else if (ch >= 'G' && ch <= 'I') {
            total_time += 5;
        }
        else if (ch >= 'J' && ch <= 'L') {
            total_time += 6;
        }
        else if (ch >= 'M' && ch <= 'O') {
            total_time += 7;
        }
        else if (ch >= 'P' && ch <= 'S') {
            total_time += 8;
        }
        else if (ch >= 'T' && ch <= 'V') {
            total_time += 9;
        }
        else if (ch >= 'W' && ch <= 'Z') {
            total_time += 10;
        }
    }

    printf("%d\n", total_time);
    return 0;
}
