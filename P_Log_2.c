#include <stdio.h>
#include <string.h>

long long log(long long n){
    if (n==1) return 0;
    return 1+log(n/2);
}

int main() {

    long long n;
    scanf("%lld",&n);

    n = log(n);
    printf("%lld\n",n);

    return 0;
}