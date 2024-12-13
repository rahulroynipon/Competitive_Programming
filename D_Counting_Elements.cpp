#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> v;
    int count = 0;

    for (int i=0; i<n; i++){
        int x = arr[i]+1;
        auto it = find(v.begin(),v.end(),x);
        if (it!=v.end()) count++;
    }

    cout<<count<<endl;

    return 0;
}