#include<stdio.h>

void display(int n){
    if (n<1) return;
    display(n-1);
    printf("%d\n",n);
}

int main(){
    int n;

    scanf("%d",&n);
    display(n);

    return 0;
}