#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int r1 = min(m,a);
        int r2 = min(m,b);
        int able = 2*m - r1 -r2;
        int r3 = min(c,able);
        cout<<r1+r2+r3<<endl;

    }
    

    return 0;
}