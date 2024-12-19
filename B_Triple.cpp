#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        unordered_map<int,int> list;
        int n,x;
        cin>>n;
        
        for(int i=0; i<n; i++){
            cin>>x;
            list[x] = list[x] ? list[x]+1 : 1;
        }

        bool flag = false;
        
        for (auto it: list){
            if(it.second>=3){
                cout<<it.first<<endl;
                flag = true;
                break;
            }
        }

        if(flag){
            continue;
        }

        cout<<-1<<endl;

    }
    

    return 0;
}