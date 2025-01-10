#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s;
    queue<int> q;

    int n, m;
    cin>>n>>m;

    int x;
    for (int i=0; i<n; i++){
        cin>>x;
        s.push(x);
    }

    for (int i=0; i<n; i++){
        cin>>x;
        q.push(x);
    }

    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }

    bool flag = true;

    for (int i=0; i<n; i++){
         if(s.top()!=q.front()){
            flag = false;
            break;
         }
         s.pop();
         q.pop();
    }

    cout<<(flag ? "YES": "NO")<<endl;

    return 0;
}