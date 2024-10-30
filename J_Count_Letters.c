#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    int arr[26] = {0};

    while ((ch = getchar()) != EOF)
    {
        arr[ch-'a'] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i]) printf("%c : %d\n", (i + 'a'), arr[i]);
    }
    
    return 0;
} 



// int length = 10000001; 
// char *str = (char *)malloc(length * sizeof(char));

// if (str == NULL) {
//     return 1;
// }

// int arr[26] = {0};
// scanf("%s", str);

// for (int i = 0; str[i] != '\0'; i++) {
//     arr[str[i] - 'a'] += 1;
// }

// for (int i = 0; i < 26; i++) {
//     if (arr[i]) printf("%c : %d\n", (i + 'a'), arr[i]);
// }
    