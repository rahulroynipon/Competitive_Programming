#include <stdio.h>

int main(){
    int len,flag=1;
    scanf("%d",&len);
    
    int arr[len];
    for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0,j=len-1; i<=j; i++,j--){
        if (arr[i]!=arr[j]){
            flag = 0;
            break;
        }
    }

    printf((flag) ? "YES\n": "NO\n");
    
    return 0;
}