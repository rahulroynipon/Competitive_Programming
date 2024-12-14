#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    string str;
    getline(cin,str);

    int count = 0;
    int start=0;
    for (int i=0; i<n; i++){
        if (str[i]=='x'){
            start++;
        }else{
            if (start>2)
                count+=start-2;
            start = 0;
        }
    }

    if (start>2){
        count += start-2;
    }

    cout<<count<<endl;

    return 0;
}