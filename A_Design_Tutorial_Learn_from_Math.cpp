#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1) return false;
    for (int i=2; i*i<=n; i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    int x= n/2;
    int y = n-x;


    while (isPrime(x) || isPrime(y))
    {
        x--;
        y++;
    }

    cout<<x<<" "<<y<<endl;
    

    return 0;
}