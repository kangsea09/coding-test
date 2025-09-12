#include <stdio.h>

int main() {
    char word[1000001];
    int alpha[26] = { 0 };

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];

        if (ch >= 'a' && ch <= 'z') {
            alpha[ch - 'a']++;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            alpha[ch - 'A']++;
        }
    }

    int max = 0;
    int index = -1;
    int duplicate = 0;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            index = i;
            duplicate = 0;
        }
        else if (alpha[i] == max) {
            duplicate = 1;
        }
    }

    if (duplicate) {
        printf("?\n");
    }
    else {
        printf("%c\n", index + 'A');
    }

    return 0;
}
