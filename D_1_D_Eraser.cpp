#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        char arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];
        }

        int count = 0;
        int i=0;
        while (i<n)
        {
            if (arr[i]=='B'){
                count++;
                i += k;
                continue;
            }
            i++;
        }

        cout<<count<<endl;
        
        
    }
    

    return 0;
}