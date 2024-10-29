#include <stdio.h>

int main(){

    char str[1000001]; 
    //It works and i get proper output when i use less than 10^6
    //But in question it needed 10^7 length string
    int arr[26]= {0};

    scanf("%s",str);

    for (int i=0; str[i]!='\0';i++){
        arr[str[i]-'a']+=1;
    }
    
    for (int i=0;i<26;i++){
        if(arr[i]) printf("%c : %d\n",(i+'a'), arr[i]);
    }
    
    return 0;
}