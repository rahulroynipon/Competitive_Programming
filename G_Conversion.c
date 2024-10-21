#include <stdio.h>

int main(){
    char str[100001];

    scanf("%s",str);

    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]==','){
            printf(" ");
        }
        else if ('a'<=str[i] && str[i]<='z'){
            printf("%c",str[i]-32);
        }else{
            printf("%c",str[i]+32);
        }

        i++;
    }
    

    return 0;
}