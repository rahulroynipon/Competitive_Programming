#include<stdio.h>

void display(n){
    if (n==1) return;
    printf("%d\n",n);
    diplay(n-1);