#include <stdio.h>

int main(){
    int len;
    scanf("%d",&len);

    int arr[len];
    for (int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }

    for (int i=len-1,j=0; j<=i; i--,j++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
   

    for (int i=0; i<len; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}