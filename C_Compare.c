#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21];
    int flag = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] == str2[i]) continue;
        if (str1[i] > str2[i]) {
            printf("%s\n", str2); 
        } else {
            printf("%s\n", str1); 
        }
        flag = 1;
        break;   
    }

   
    if (!flag) {
        printf("%s\n", (strlen(str1) > strlen(str2)) ? str2 : str1);
    }

    return 0;
}
