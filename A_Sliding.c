#include <stdio.h>
#include <string.h>

int main() {

    int t;
    
    scanf("%d",&t);

    while (t--)
    {
        long long n,m,r,c;
        scanf("%lld %lld %lld %lld",&n,&m,&r,&c);
        long long ans = (n-r)*(2*m-1) + (m-c);
        printf("%lld\n",ans);
    }
    

    return 0;
}