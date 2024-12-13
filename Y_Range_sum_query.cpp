#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;

    long long arr[x];
    for (int i=0; i<x; i++){
        cin>>arr[i];
    }

    for (int i=1; i<x; i++){
        arr[i] += arr[i-1];
    }


    while (y--)
    {
        int l,r;
        cin>>l>>r;

        if (l==1){
            cout<<arr[r-1];
        }else{
            cout<<arr[r-1]-arr[l-2];
        }

        cout<<endl;
    }
    

    return 0;
}