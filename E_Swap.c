#include <stdio.h>

int main(){
    int a,b,temp;

    scanf("%d %d",&a,&b);
    int *ptr1=&a, *ptr2=&b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("%d %d\n",a,b);

    return 0;
}