#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    long long total;
    cin>>t;

    while (t--)
    {
        cin>>n;
        int arr[n];
        total = 0;

        for (int i=0; i<n; i++){
            cin>>arr[i];
            total+=arr[i];
        }

        if(total>=n){
            total-=n;
        }else{
            total = 1;
        }

        cout<<total<<endl;


    }
    

    return 0;
}