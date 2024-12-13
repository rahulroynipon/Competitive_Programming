#include<bits/stdc++.h>
using namespace std;


int maxSum(int arr[],int n, int k){
    int start = 0;
    int end = k;
    int currentValue = 0;


    for (int i=start; i<end; i++){
        currentValue += arr[i];
    }

    int maxValue = currentValue;

    while (end<n){
        currentValue -= arr[start++];
        currentValue += arr[end++];
        maxValue = max(maxValue,currentValue);
    }

    return maxValue;

}

int minSum(int arr[],int n,int target){
    int minValue = n;

    int start=0,end=0;
    int currentValue = 0;
    while (end<n){
        currentValue += arr[end++];
        while (currentValue>target){
            minValue = min(minValue,end-start);
            currentValue -= arr[start++];
        }
    }


    return minValue;
}

int main(){

    int n = 10;
    int arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int target = 280;

    int ans = maxSum(arr,n,target);
    int m = minSum(arr,n,target);
    cout<<m<<endl;
    

    


    return 0;
}