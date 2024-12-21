#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;

        vector<int> prefix(n,0);
        vector<int> sufix(n,0);

        string ch;
        cin.ignore();
        getline(cin,ch);

        unordered_set<char> prefixSet;
        unordered_set<char> sufixSet;

        for (int i=0, j=n-1; i<n, j>0; i++,j--){
            prefixSet.insert(ch[i]);
            sufixSet.insert(ch[j]);
            prefix[i] = prefixSet.size();
            sufix[j] = sufixSet.size(); 
        }

        int maxValue = INT_MIN;
        for (int i=0; i<n-1; i++){
            maxValue = max(maxValue, prefix[i]+sufix[i+1]);
        }

    
        cout<<maxValue<<endl;  
    }
    

    return 0;
}