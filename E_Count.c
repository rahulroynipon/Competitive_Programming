#include<stdio.h>

int main(){
    char str[1000001];
    int sum = 0;

    scanf("%s",str);

    int i=0;
    while (str[i]!='\0'){
        sum+= str[i]-'0';
        i++;
    }

    printf("%d",sum);
    

    return 0;
}