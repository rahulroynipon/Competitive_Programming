#include<stdio.h>



void display(int arr[],int n){
    int lastZero = n-1;

    for (int i=0; i<=lastZero; i++){
      
        if (!arr[i]){
            for (int j=i; j<lastZero; j++){
                arr[j] = arr[j+1];
            }
            arr[lastZero--] = 0;
            i--;
        }
    }
    
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    display(arr,n);
  
    return 0;
}