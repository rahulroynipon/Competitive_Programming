#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char S[51], T[51];
        char result[102];

        scanf("%s %s", S, T);
        
        int lenS = strlen(S);
        int lenT = strlen(T);
        int i, j = 0;

        for (i = 0; i < lenS && i < lenT; i++) {
            result[j++] = S[i];
            result[j++] = T[i];
        }

        while (i < lenS) {
            result[j++] = S[i++];
        }

        while (i < lenT) {
            result[j++] = T[i++];
        }

        result[j] = '\0';
        printf("%s\n", result);
    }

    return 0;
}
