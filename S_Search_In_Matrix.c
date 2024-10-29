#include <stdio.h>

int main(){
    int n,m,f;
    scanf("%d %d",&n,&m);

    int arr[n][m];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    scanf("%d",&f);

    int flag = 0;

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (arr[i][j]==f){
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    printf((flag) ? "will not take number\n": "will take number\n");


    return 0;
}