#include<stdio.h>

int main(){
    int ans[100001] = {0};

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n+1];
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        ans[arr[i]] += 1;
    }

    for (int i=1;i<=m;i++){
        printf("%d\n",ans[i]);
    }

    return 0;
}