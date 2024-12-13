#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        int x,count = 0;
        for (int i=0; i<n; i++){
            cin>>x;
            if (x==2){
                count++;
            }
            v[i] = count;
        }

        int foundIndex = 0;
        bool flag = false;
        while (foundIndex<n)
        {
            if (v[foundIndex]==v[n-1]-v[foundIndex]){
                flag = true;
                break;
            }

            foundIndex++;
        }
        
        cout<<(flag ? foundIndex+1 : -1)<<endl;
        

    }
    

    return 0;
}