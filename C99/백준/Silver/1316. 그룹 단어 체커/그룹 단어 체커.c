#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);


    int count = 0;
    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);

        int visit[26] = { 0 };
        int group = 1;
        char before = { 0 };

        for (int j = 0; j < strlen(word); j++) {
            char c = word[j];

            if (c != before) {
                if (visit[c - 'a']) {
                    group = 0;
                    break;
                }
            visit[c - 'a'] = 1;
            }
        before = c;
        }
        if (group)
            count++;
    }

    printf("%d", count);
    return 0;
}