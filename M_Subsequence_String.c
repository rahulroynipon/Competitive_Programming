#include<stdio.h>

int main(){

    char str[10001],find[] = "hello";
    scanf("%s",str);

    int i=0,s=0;
    while(str[i]!='\0'){
        if (str[i] == find[s]){
            s++;
        }
        i++;
    }

    printf((s==5) ? "YES\n":"NO\n");


    return 0;
}