#include<bits/stdc++.h>
using namespace std;

int fun(int x){
    return x > 0 ? 1: x<0 ? 2 : 0;
}

int main(){

    int n;

    cin>>n;

    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    transform(v.begin(), v.end(), v.begin(), fun);

    for (int i: v){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}