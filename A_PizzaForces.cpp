#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;



    while (t--)
    {
        long long n;
        cin>>n;

        long long arr[n/2];

    
        for (int i=0; i<n/2; i++){
            for (int j=0; j<n/2; j++){

               for (int k=0; k<n/2; k++){
                 long long x = i*10 + j*8 + k*6;
                 if(x>=n){
                    long long ans = i*25 + j*20 + k*15;
                    arr[i] = ans;
                 }
               }

              
            }

        
        }
    
         cout<<min(arr)<<endl;
    }
    

   
  return 0;
}