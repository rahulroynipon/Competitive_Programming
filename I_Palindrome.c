#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    scanf("%s",str);

    int len = strlen(str),flag = 1;

    for (int i=0,j=len-1; i<=j; i++,j--){
        if (str[i]!=str[j]){
            flag = 0;
            break;
        }
    }

    printf((flag) ? "YES\n": "NO\n");



    return 0;
}