#include <stdio.h>

int summation(int a,int b){
    return a+b;
}

int main(){
    int a,b;

    scanf("%d %d",&a,&b);
    // printf("%d",summation(a,b));

    int *ptr1 = &a, *ptr2 = &b;

    printf("%d",*ptr1 + *ptr2);


    return 0;
}