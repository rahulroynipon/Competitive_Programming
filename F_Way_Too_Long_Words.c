#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for (int i=0;i<t;i++){
        char str[101];

        scanf("%s",str);
        
        int len=0;

        while (str[len]!='\0')
        {
            len++;
        }

        if (len>10){
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }else{
            printf("%s\n",str);
        }
        


    }

    return 0;
}