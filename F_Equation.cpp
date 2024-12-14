#include<bits/stdc++.h>
using namespace std;

long long sum(int x, int y){
    long long twoX = x*x;
    long long prev = 1;
    long long total = 0;

    for (int i=2; i<=y; i+=2){
        prev = twoX*prev;
        total += prev;
    }

    return total;

}

int main(){

    int x,y;
    cin>>x>>y;

    long long ans = sum(x,y);
    cout<<ans<<endl;

    return 0;
}