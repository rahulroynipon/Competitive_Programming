#include<bits/stdc++.h>
using namespace std;

char reversedChar(char x){
    if (x=='q'){
        return 'p';
    }
    else if (x=='p'){
        return 'q';
    }
    return 'w';
}

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        char str[101];
        cin>>str;

        int n = strlen(str);

        for (int i=0,j=n-1; i<=j; i++, j--){
            char temp = str[i];
            str[i] = reversedChar(str[j]);
            str[j] = reversedChar(temp);
        }

        cout<<str<<endl;
    }
    

    return 0;
}