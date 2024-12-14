#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;

    long long arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i=0, j=n-1; i<n/2; i++, j--){
        cout<<arr[i]<<" "<<arr[j]<<" ";
    }

    if (n%2==1){
        cout<<arr[n/2];
    }
    cout<<endl;

    return 0;
}