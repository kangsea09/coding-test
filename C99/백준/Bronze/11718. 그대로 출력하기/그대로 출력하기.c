#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    while (fgets(word, sizeof(word), stdin)) {
        printf("%s", word);
    }
    return 0;
}
