#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int pos[26];
    
    for (int i = 0; i < 26; i++) {
        pos[i] = -1;
    }
    
    scanf("%s", S);
    int len = strlen(S);
    
    for (int i = 0; i < len; i++) {
        int idx = S[i] - 'a';
        if (pos[idx] == -1) {
            pos[idx] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", pos[i]);
    }
    return 0;
}
