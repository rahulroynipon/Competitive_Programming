#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {

        int n;
        cin>>n;

        unordered_map<int, unordered_set<int>> list;

        int x;
        for (int i=0; i<n; i++){
            cin>>x;
            list[i%2].insert(x%2);
        }

        bool flag = true;
        
        for (auto it:list){
            if(it.second.size()>1){
                flag = false;
                break;
            }
        }

        cout<<(flag ? "YES": "NO")<<endl;

    }
    
    return 0;
}