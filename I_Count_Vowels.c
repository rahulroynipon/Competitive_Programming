#include <stdio.h>
#include <string.h>

int countVowel(char str[],int i){
    if (str[i]=='\0') return 0;

    char x = tolower(str[i]);
    int isVowel = (x=='a' || x=='e' || x=='i' || x=='o' || x=='u') ? 1:0;

    return isVowel+countVowel(str,i+1);

}


int main() {
    
    char str[201];
    scanf("%[^\n]",str);

    int count = countVowel(str,0);

    printf("%d\n",count);

    return 0;
}