#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    int x;
    while (cin>>x)
    {
        v.push_back(x);
    }

    for (int i=0; i<v.size()-1; i++){
        for (int j=i+1; j<v.size(); j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }

    for (int i: v){
        cout<<i<<" ";
    }
    

    return 0;
}