#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    for (int i=0; i<n; i++){
        scanf("%d",arr+i);

        if (*(arr+i) > 0){
            *(arr+i) = 1;
        }else if (*(arr+i)<0){
            *(arr+i) = 2;
        }
        printf("%d ",*(arr+i));
    }


    return 0;
}