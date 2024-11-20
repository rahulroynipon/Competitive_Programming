#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int arr[4],m=0,n=0;
        for (int i=0; i<4; i++){
            cin>>arr[i];
        }

        int x = max(arr[0],arr[1]);
        int y = max(arr[2],arr[3]);


        sort(arr,arr+4);

        if(max(x,y)==arr[3] && min(x,y)==arr[2]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}