#include<stdio.h>
#include<math.h>

int main(){
    int n,p=0,s=0;
    scanf("%d",&n);


    int arr[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i=0;i<n;i++){
        p+=arr[i][i];
        s+=arr[i][n-1-i];
    }

    printf("%d\n",abs(p-s));



    return 0;
}