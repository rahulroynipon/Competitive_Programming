#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch,str[100];

    cin>>ch;

    if ('0'<=ch && ch<='9'){
        cout<<"IS DIGIT\n";
    }else if('a'<=ch && ch<='z'){
        cout<<"ALPHA\nIS SMALL\n";
    }else{
        cout<<"ALPHA\nIS CAPITAL\n";
    }
    
    return 0;
}
