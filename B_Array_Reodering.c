#include <stdio.h>
#include <string.h>

int gcd(int a,int b){
    if (b==0) return a;
    return gcd(b,a%b);
}

int main() {

    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);

        int arr[n];

        for (int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] < arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
}


        int count=0;

        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
               int x = arr[j]*2;
               if (gcd(arr[i],x)>1){
                count++;
               }
            }
        }

        printf("%d\n",count);


    }
    



    
    return 0;
}