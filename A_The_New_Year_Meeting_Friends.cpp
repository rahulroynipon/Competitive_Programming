#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int minMum = min({a,b,c});
    int maxMum = max({a,b,c});

    cout<<maxMum-minMum<<endl;

    return 0;
}