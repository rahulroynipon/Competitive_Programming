#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d",&t);
    // printf("%d", t);

    while (t--)         
    {
        int n;
        scanf("%d ",&n);

        int sw = 2*n;
        int arr[sw], countZero=0, countOne=0;

        for (int i=0; i<sw; i++){
            scanf("%d ",&arr[i]);
            (arr[i]) ? countOne++ : countZero++;
        }

        int min=0,max=0;

        if (countZero%2==1) min = 1;
        if (countZero>=countOne) max = countOne;
        else max = countZero;


        printf("%d %d\n",min,max);
       
    }

    return 0;
}