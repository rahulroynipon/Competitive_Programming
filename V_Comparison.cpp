#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,flag=0;
    char ch;

    cin>>x>>ch>>y;

    switch (ch)
    {
    case '=':
        flag = (x==y ? 1:0);
        break;
    
    case '>':
    flag = (x>y ? 1:0);
    break;
    case '<':
    flag = (x<y ? 1:0);
    break;
    }

    cout<<(flag ? "Right": "Wrong");
    

    return 0;
}