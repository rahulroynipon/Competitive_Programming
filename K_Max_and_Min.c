#include<stdio.h>

int main(){
    int x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    int *ptr1=&x,*ptr2=&y,*ptr3=&z;

    int min = *ptr1;
    if (min>*ptr2){
        min = *ptr2;
    }
    if (min>*ptr3){
        min = *ptr3;
    }

    int max = *ptr1;
    if (max<*ptr2){
        max = *ptr2;
    }
    if (max<*ptr3){
        max = *ptr3;
    }

    printf("%d %d\n",min,max);




    return 0;
}