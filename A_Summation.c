#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    long long int arr[n],sum=0;
    long long int *ptr = arr;

    for (int i=0; i<n; i++){
        scanf("%lld",ptr+i);
        sum+= *(ptr+i);
    }

    printf("%lld\n",(sum>0) ? sum : sum*-1);

    return 0;
}