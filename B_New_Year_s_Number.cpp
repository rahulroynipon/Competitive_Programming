#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;


        int temp = n/2020;
        int total = temp*2020;
        int div = n - total;

        cout<<(temp>=div && temp!=0 ? "YES": "NO")<<endl;
    }
    

    return 0;
}