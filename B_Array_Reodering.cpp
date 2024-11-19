#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if (b==0) return a;
    return gcd(b,a%b);
}

int main(){

    int t;

    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];
        }

        int lastEven=0;

        for (int i=0; i<n; i++){
            if (arr[i]%2==0){
                swap(arr[lastEven],arr[i]);
                lastEven++;
            }
        }

        
        int count=0;
        
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if(gcd(arr[i],arr[j]*2) >1) count++;
            }
        }

        cout<<count<<endl;


        
    }
    

    return 0;
}